/*
 * XREFs of ?Flush@CDevice@DirectComposition@@UEAAJXZ @ 0x180024970
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ @ 0x180022D9C (-ExecuteGutterExtensions@CAtlasSurfacePool@DirectComposition@@QEAAJXZ.c)
 *     ?ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ @ 0x180027B98 (-ExtendEdgesForInvalidGutters@CBitmapInfoBack@DirectComposition@@QEAAJXZ.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z @ 0x1800840A8 (-FlushD2DRendering@CAtlasSurfacePool@DirectComposition@@QEAAXK@Z.c)
 *     ?CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ @ 0x18009ACB8 (-CheckClientDrawNotInProgress@CDevice@DirectComposition@@QEBAJXZ.c)
 *     ?First@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@XZ @ 0x18009AD9C (-First@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEA.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 *     ??0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z @ 0x18009B9B4 (--0MultithreadDeviceLock@DirectComposition@@QEAA@PEBVCDxDevice@1@@Z.c)
 *     ?Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z @ 0x18009BE08 (-Leave@MultithreadDeviceLock@DirectComposition@@SAXPEBVCDxDevice@2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::Flush(DirectComposition::CDevice *this)
{
  char *v1; // r12
  __int64 v3; // rcx
  int j; // edi
  _QWORD *Next; // rbp
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rax
  __int64 i; // rsi
  __int64 v23; // rbx
  unsigned int v24; // edx
  _QWORD *v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rbx
  DirectComposition::CAtlasSurfacePool *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  bool v34; // zf
  struct DirectComposition::CDxDevice *v36; // [rsp+50h] [rbp+8h] BYREF

  v1 = (char *)this + 80;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3) )
      v1[52] = 1;
    ++*((_DWORD *)v1 + 12);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 8));
  }
  j = DirectComposition::CDevice::CheckClientDrawNotInProgress((DirectComposition::CDevice *)((char *)this - 16));
  if ( j >= 0 )
  {
    Next = (_QWORD *)CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::First((char *)this + 592);
    while ( Next )
    {
      v6 = Next[3];
      j = 0;
      v7 = *(_QWORD *)(v6 + 96);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) )
          *(_BYTE *)(v6 + 148) = 1;
        ++*(_DWORD *)(v6 + 144);
      }
      else
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 104));
      }
      DirectComposition::MultithreadDeviceLock::MultithreadDeviceLock(
        (DirectComposition::MultithreadDeviceLock *)&v36,
        (const struct DirectComposition::CDxDevice *)(Next + 1));
      v8 = Next[39];
      v9 = *(_QWORD *)(v8 + 32);
      v10 = v9 - 32;
      if ( v9 == v8 + 32 )
        v10 = 0LL;
      if ( v10 )
      {
        do
        {
          DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
            *(DirectComposition::CAtlasSurfacePool **)(v10 + 64),
            0);
          v11 = *(_QWORD *)(v10 + 32);
          v10 = v11 - 32;
          if ( v11 == v8 + 32 )
            v10 = 0LL;
        }
        while ( v10 );
        v1 = (char *)this + 80;
      }
      v12 = *(_QWORD *)(v8 + 16);
      if ( v12 )
      {
        v13 = v12 + 32;
        v14 = *(_QWORD *)(v12 + 32);
        v15 = v14 - 16;
        if ( v14 == v13 )
          v15 = 0LL;
        if ( v15 )
        {
          do
          {
            v16 = *(_QWORD *)(v15 + 32);
            v17 = *(_DWORD *)(v16 + 180);
            v18 = (_QWORD *)(v16 + 56);
            if ( !v17 || *v18 && (*(_BYTE *)(v16 + 172) & 0x10) != 0 )
            {
              *(_DWORD *)(v16 + 180) = v17 + 2;
              v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 144) + 128LL) + 24LL);
              v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v18 + 336LL))(*v18, 0LL, 0LL);
              if ( *(int *)(v19 + 632) >= 0 && v20 < 0 )
                *(_DWORD *)(v19 + 632) = v20;
            }
            v21 = *(_QWORD *)(v15 + 16);
            v15 = v21 - 16;
            if ( v21 == v13 )
              v15 = 0LL;
          }
          while ( v15 );
          v1 = (char *)this + 80;
        }
      }
      for ( i = Next[40]; i; i = *(_QWORD *)(i + 104) )
      {
        if ( j < 0 )
          break;
        v23 = *(_QWORD *)(i + 120);
        j = 0;
        if ( v23 )
        {
          v24 = *(_DWORD *)(v23 + 164);
          if ( v24 )
          {
            DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
              *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(v23 + 16) + 64LL),
              v24);
            *(_DWORD *)(v23 + 164) = 0;
            v23 = *(_QWORD *)(i + 120);
          }
          j = DirectComposition::CBitmapInfoBack::ExtendEdgesForInvalidGutters((DirectComposition::CBitmapInfoBack *)v23);
        }
      }
      v25 = (_QWORD *)Next[41];
      if ( v25 )
      {
        while ( j >= 0 )
        {
          v26 = v25[6];
          DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
            *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(v26 + 16) + 64LL),
            *(_DWORD *)(v26 + 64));
          *(_DWORD *)(v26 + 64) = 0;
          v27 = v25[7];
          DirectComposition::CAtlasSurfacePool::FlushD2DRendering(
            *(DirectComposition::CAtlasSurfacePool **)(*(_QWORD *)(v27 + 16) + 64LL),
            *(_DWORD *)(v27 + 64));
          *(_DWORD *)(v27 + 64) = 0;
          v25 = (_QWORD *)v25[8];
          if ( !v25 )
            goto LABEL_45;
        }
      }
      else
      {
LABEL_45:
        if ( j >= 0 )
        {
          v28 = (DirectComposition::CAtlasSurfacePool *)Next[42];
          for ( j = 0; v28; Next[42] = v28 )
          {
            j = DirectComposition::CAtlasSurfacePool::ExecuteGutterExtensions(v28);
            if ( j < 0 )
              break;
            v29 = Next[42];
            v28 = *(DirectComposition::CAtlasSurfacePool **)(v29 + 240);
            *(_QWORD *)(v29 + 240) = 0LL;
          }
        }
      }
      DirectComposition::MultithreadDeviceLock::Leave(v36);
      v32 = *(_QWORD *)(v6 + 96);
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 24LL))(v32);
      v33 = *(_QWORD *)(v6 + 96);
      if ( v33 )
      {
        v34 = (*(_DWORD *)(v6 + 144))-- == 1;
        if ( v34 && *(_BYTE *)(v6 + 148) )
        {
          *(_BYTE *)(v6 + 148) = 0;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
      else
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 104));
      }
      Next = (_QWORD *)CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(
                         (char *)this + 592,
                         Next,
                         v30,
                         v31);
      if ( j < 0 )
        goto LABEL_60;
    }
    if ( *((int *)this + 154) < 0 )
      j = *((_DWORD *)this + 154);
  }
LABEL_60:
  *((_DWORD *)this + 154) = 0;
  DirectComposition::CDeviceLock::Leave((DirectComposition::CDeviceLock *)v1);
  return (unsigned int)j;
}
