/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C000BF4C
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C000BCF0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C000C25C (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  struct _ERESOURCE *v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PVOID CurrentProcess; // rax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 *v14; // rcx
  unsigned __int64 v15; // rbx
  PSLIST_ENTRY v16; // rax
  struct DirectComposition::CBatch *v17; // rdx
  struct DirectComposition::CBatch **v18; // rcx
  struct DirectComposition::CBatch *v19; // rcx
  struct DirectComposition::CBatch *v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  char *v23; // rcx
  struct DirectComposition::CBatch *v25; // rax
  struct DirectComposition::CBatch *v26; // r9
  struct DirectComposition::CBatch **v27; // r8
  struct DirectComposition::CBatch **v28; // r8
  struct DirectComposition::CBatch *v29; // rax
  struct DirectComposition::CBatch *v30; // rax
  __int64 *v31; // [rsp+50h] [rbp+30h] BYREF
  struct DirectComposition::CBatch *v32; // [rsp+58h] [rbp+38h] BYREF

  *a3 = 0LL;
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  *(_OWORD *)((char *)this + 312) = *((_OWORD *)a2 + 2);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v4, 1u);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7, v9, v10);
  if ( !DirectComposition::CConnection::s_pDwmRenderThread && CurrentProcess == g_pepDwm )
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    if ( *((_QWORD *)this + 23)
      || (v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 32) + 168LL))(
                  *((_QWORD *)this + 32),
                  (char *)this + 184),
          v13 >= 0) )
    {
      v12 = *((_QWORD *)this + 32);
      v31 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, const struct COMPOSITION_FRAME_INFO *, __int64 **))(*(_QWORD *)v12
                                                                                                  + 176LL))(
              v12,
              a2,
              &v31);
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 16LL))(*((_QWORD *)this + 32));
        v14 = v31;
        *((_QWORD *)this + 20) = *(_QWORD *)a2;
        v15 = (*(__int64 (__fastcall **)(__int64 *))(*v14 + 72))(v14);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
        {
          v13 = -1073740024;
        }
        else
        {
          v16 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
          v17 = 0LL;
          v18 = (struct DirectComposition::CBatch **)v16;
          if ( v16 )
          {
            do
            {
              v25 = v18[3];
              v26 = *v18;
              if ( v25 )
              {
                v27 = (struct DirectComposition::CBatch **)*((_QWORD *)v25 + 3);
                *((_QWORD *)v25 + 3) = 0LL;
                v30 = v18[3];
                v18[3] = 0LL;
                *v18 = v30;
              }
              else
              {
                v27 = v18;
              }
              *v27 = v17;
              v17 = (struct DirectComposition::CBatch *)v18;
              v18 = (struct DirectComposition::CBatch **)v26;
            }
            while ( v26 );
          }
          v19 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
          v32 = v17;
          if ( v19 )
          {
            do
            {
              v28 = (struct DirectComposition::CBatch **)v19;
              *(_BYTE *)(*((_QWORD *)v19 + 1) + 49LL) = 0;
              v19 = *(struct DirectComposition::CBatch **)v19;
            }
            while ( v19 );
            v29 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
            *((_QWORD *)this + 17) = 0LL;
            *v28 = v17;
            v32 = v29;
          }
          DirectComposition::CConnection::KeepOrDeferBatches(this, v15, &v32);
          v13 = 0;
          v20 = v32;
          *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
          *((_QWORD *)this + 22) = *((_QWORD *)a2 + 3);
          if ( v20 )
            (*(void (__fastcall **)(__int64 *, __int64))(*v31 + 56))(v31, (__int64)v20 + 120);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 32) + 72LL))(*((_QWORD *)this + 32), v31);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 23) + 16LL))(*((_QWORD *)this + 23), v31);
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 24LL))(*((_QWORD *)this + 32));
        v21 = *v31;
        if ( v13 < 0 )
        {
          (*(void (**)(void))(v21 + 32))();
        }
        else
        {
          v22 = (*(__int64 (**)(void))(v21 + 72))();
          ExAcquirePushLockExclusiveEx((char *)this + 328, 0LL);
          *((_BYTE *)this + 336) = 1;
          *((_QWORD *)this + 44) = v22;
          v23 = (char *)this + 328;
          if ( *((_BYTE *)this + 336) )
            ExReleasePushLockExclusiveEx(v23, 0LL);
          else
            ExReleasePushLockSharedEx(v23, 0LL);
          *a3 = v22;
        }
        (*(void (__fastcall **)(__int64 *))(*v31 + 8))(v31);
      }
    }
  }
  else
  {
    v13 = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
