/*
 * XREFs of ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18007F334
 * Callers:
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x18007E068 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 * Callees:
 *     ?DestroyAllResources@CD3DDevice@@AEAAXXZ @ 0x180021788 (-DestroyAllResources@CD3DDevice@@AEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 *     ?DeleteUnusedDevices@CDeviceManager@@AEAAXXZ @ 0x180080D70 (-DeleteUnusedDevices@CDeviceManager@@AEAAXXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCD3DDevice@@@?$vector@PEAVCD3DDevice@@V?$allocator@PEAVCD3DDevice@@@std@@@std@@QEAAPEAPEAVCD3DDevice@@QEAPEAV2@AEBQEAV2@@Z @ 0x18027702C (--$_Emplace_reallocate@AEBQEAVCD3DDevice@@@-$vector@PEAVCD3DDevice@@V-$allocator@PEAVCD3DDevice@.c)
 */

void __fastcall CDeviceManager::AdvanceFrame(CDeviceManager *this)
{
  CD3DDevice **v1; // rsi
  CD3DDevice **v2; // rbp
  CD3DDevice **v3; // rbx
  CD3DDevice **v4; // rdi
  CDeviceManager *v5; // rcx
  CD3DDevice **v6; // rbp
  struct CComposition *v7; // rbx
  CD3DDevice **v8; // rbx
  CD3DDevice *v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  CD3DDevice **v12; // [rsp+30h] [rbp-18h]

  v1 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  EnterCriticalSection(&stru_1803D75A8);
  v2 = (CD3DDevice **)*((_QWORD *)&xmmword_1803D75D0 + 1);
  v3 = (CD3DDevice **)xmmword_1803D75D0;
  v4 = 0LL;
  while ( v3 != v2 )
  {
    if ( (int)CD3DDevice::AdvanceFrame(*v3) < 0 )
    {
      CMILRefCountImpl::AddReference((CD3DDevice *)((char *)*v3 + 8));
      if ( v4 == v1 )
      {
        std::vector<CD3DDevice *>::_Emplace_reallocate<CD3DDevice * const &>(&v11, v4, v3);
        v1 = v12;
        v4 = (CD3DDevice **)*((_QWORD *)&v11 + 1);
      }
      else
      {
        *v4++ = *v3;
        *((_QWORD *)&v11 + 1) = v4;
      }
    }
    v3 += 2;
  }
  LeaveCriticalSection(&stru_1803D75A8);
  v6 = (CD3DDevice **)v11;
  if ( (CD3DDevice **)v11 != v4 )
  {
    v7 = g_pComposition;
    AcquireSRWLockExclusive((PSRWLOCK)g_pComposition + 84);
    *((_DWORD *)v7 + 170) = GetCurrentThreadId();
    v8 = v6;
    do
    {
      v9 = *v8;
      if ( !*((_BYTE *)*v8 + 1506) )
      {
        *((_BYTE *)v9 + 1506) = 1;
        CD3DDevice::DestroyAllResources(v9);
        v9 = *v8;
      }
      CD3DDevice::Release(v9);
      ++v8;
    }
    while ( v8 != v4 );
    v10 = (RTL_SRWLOCK *)((char *)g_pComposition + 672);
    *((_DWORD *)g_pComposition + 170) = 0;
    ReleaseSRWLockExclusive(v10);
  }
  CDeviceManager::DeleteUnusedDevices(v5);
  if ( v6 )
    std::_Deallocate<16,0>(v6, ((char *)v1 - (char *)v6) & 0xFFFFFFFFFFFFFFF8uLL);
}
