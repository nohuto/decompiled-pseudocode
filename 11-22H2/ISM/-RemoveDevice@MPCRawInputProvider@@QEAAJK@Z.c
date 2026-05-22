/*
 * XREFs of ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x1800DEBE4
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800DF9A8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18001ADB0 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x1800DD948 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x1800DECB0 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RemoveDevice(MPCRawInputProvider *this, unsigned int a2)
{
  unsigned int v2; // esi
  _BYTE *v4; // rdx
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = a2;
  if ( GetCurrentThreadId() == *((_DWORD *)this + 22) )
  {
    if ( *((_BYTE *)this + 80) )
    {
      MPCRawInputProvider::RemoveDeviceImpl(this, v6);
      return 0LL;
    }
    v2 = v6;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = (_BYTE *)*((_QWORD *)this + 21);
  if ( v4 == *((_BYTE **)this + 22) )
  {
    std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((const void **)this + 20, v4, &v6);
  }
  else
  {
    *(_DWORD *)v4 = v2;
    *((_QWORD *)this + 21) += 4LL;
  }
  wil::details::SetEvent(*((wil::details **)this + 9), v4);
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return 0LL;
}
