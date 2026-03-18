/*
 * XREFs of MagGetLensContextInformation @ 0x1C01A31B0
 * Callers:
 *     NtUserMagGetContextInformation @ 0x1C01D68E0 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C014E84A (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1C01A2E1C (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     _GetMagnificationInputTransform @ 0x1C01F6D18 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C026E160 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        struct tagWND *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  unsigned int updated; // ebx
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  int v9; // r9d
  struct _MAG_THREAD_CONTEXT *v10; // rsi
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  struct _MAG_LENS_CONTEXT *v20; // rax
  struct _MAG_LENS_CONTEXT *v21; // rax
  struct _MAG_LENS_CONTEXT *v22; // rax
  struct _MAG_LENS_CONTEXT *v23; // r14
  unsigned int v24; // eax
  _DWORD *v25; // r12
  int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  void **Handle; // rbp
  void *v40; // rdi
  void *v41; // rcx
  unsigned int *v42; // rax
  unsigned int *v43; // r10
  int v44; // ecx
  __int64 v45; // r8
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  struct _MAG_LENS_CONTEXT *v50; // rax
  struct _MAG_LENS_CONTEXT *v51; // r8
  int v52; // edx
  int v53; // ecx
  int v54; // eax
  __int64 v55; // r9
  __int64 v56; // r11
  __int64 v57; // rdx
  struct _MAG_LENS_CONTEXT *v58; // rax
  int v59; // eax
  struct _MAG_LENS_CONTEXT *v60; // rax
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  PVOID Object; // [rsp+40h] [rbp-48h]
  __int128 v63; // [rsp+48h] [rbp-40h] BYREF
  __int64 v64; // [rsp+58h] [rbp-30h]

  v63 = 0LL;
  v64 = 0LL;
  updated = -1073741811;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(a1, a2);
  v10 = ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  v12 = v9 - 2;
  if ( !v12 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (LensContext = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 232LL)) == 0LL )
    {
      LensContext = MagpFindLensContext(v10, a3);
      if ( !LensContext )
        return updated;
    }
    *(_OWORD *)a5 = *(_OWORD *)((char *)LensContext + 72);
    return 0;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v60 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 232LL)) == 0LL )
    {
      v60 = MagpFindLensContext(v10, a3);
      if ( !v60 )
        return updated;
    }
    if ( (*((_DWORD *)v60 + 4) & 2) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v60 + 88);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v60 + 104);
    }
    else
    {
      *(_OWORD *)a5 = gMagOutTransformIdentity;
      *(_OWORD *)(a5 + 16) = xmmword_1C035A228;
    }
    return 0;
  }
  v14 = v13 - 1;
  if ( !v14 )
    return (unsigned int)GetMagnificationInputTransform(a5) == 0 ? 0xC0000001 : 0;
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v58 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 240LL)) == 0LL )
    {
      v58 = MagpFindLensContext(v10, a3);
      if ( !v58 )
        return updated;
    }
    if ( (*((_DWORD *)v58 + 4) & 4) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v58 + 120);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v58 + 136);
      *(_OWORD *)(a5 + 32) = *(_OWORD *)((char *)v58 + 152);
      *(_OWORD *)(a5 + 48) = *(_OWORD *)((char *)v58 + 168);
      *(_OWORD *)(a5 + 64) = *(_OWORD *)((char *)v58 + 184);
      *(_OWORD *)(a5 + 80) = *(_OWORD *)((char *)v58 + 200);
      v59 = *((_DWORD *)v58 + 54);
    }
    else
    {
      *(_OWORD *)a5 = gMagEffectIdentity;
      *(_OWORD *)(a5 + 16) = xmmword_1C035A250;
      *(_OWORD *)(a5 + 32) = xmmword_1C035A260;
      *(_OWORD *)(a5 + 48) = xmmword_1C035A270;
      *(_OWORD *)(a5 + 64) = xmmword_1C035A280;
      *(_OWORD *)(a5 + 80) = xmmword_1C035A290;
      v59 = dword_1C035A2A0;
    }
    *(_DWORD *)(a5 + 96) = v59;
    return 0;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v50 = MagpFindLensContext(ThreadContext, a3);
    v51 = v50;
    if ( !v50 )
      return updated;
    v52 = *a6;
    if ( (unsigned int)*a6 >= 8 )
    {
      v53 = *((_DWORD *)v50 + 56);
      *(_DWORD *)a5 = v53;
      v54 = *((_DWORD *)v50 + 57);
      *(_DWORD *)(a5 + 4) = v54;
      v55 = (unsigned int)(v54 + v53);
      v56 = (unsigned int)v55;
      if ( (unsigned int)(v52 - 8) >= (unsigned __int64)(8 * v55) )
      {
        if ( (_DWORD)v55 )
        {
          v57 = 0LL;
          do
          {
            *(_QWORD *)(a5 + v57 + 8) = *(_QWORD *)(v57 + *((_QWORD *)v51 + 29));
            v57 += 8LL;
            --v56;
          }
          while ( v56 );
        }
        *a6 = 8 * v55 + 8;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v42 = (unsigned int *)MagpFindLensContext(ThreadContext, a3);
    v43 = v42;
    if ( !v42 )
      return updated;
    v44 = *a6;
    if ( (unsigned int)*a6 >= 0x10 )
    {
      v45 = v42[60];
      *(_DWORD *)a5 = v45;
      *(_DWORD *)(a5 + 4) = v42[61];
      *(_DWORD *)(a5 + 8) = v42[62];
      *(_DWORD *)(a5 + 12) = v42[63];
      if ( (unsigned int)(v44 - 16) >= (unsigned __int64)(24 * v45) )
      {
        v46 = 0;
        if ( (_DWORD)v45 )
        {
          do
          {
            v47 = v46++;
            v48 = 3 * v47;
            v49 = *((_QWORD *)v43 + 32);
            *(_OWORD *)(a5 + 8 * v48 + 16) = *(_OWORD *)(v49 + 8 * v48);
            *(_QWORD *)(a5 + 8 * v48 + 32) = *(_QWORD *)(v49 + 8 * v48 + 16);
            LODWORD(v45) = *(_DWORD *)a5;
          }
          while ( v46 < *(_DWORD *)a5 );
        }
        *a6 = 24 * v45 + 16;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
        return updated;
      if ( !a3 )
        return updated;
      v20 = MagpFindLensContext(ThreadContext, a3);
      if ( !v20 )
        return updated;
      *(_DWORD *)a5 = *((_DWORD *)v20 + 66);
    }
    else
    {
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v21 = MagpFindLensContext(ThreadContext, a3);
      if ( !v21 )
        return updated;
      *(_DWORD *)a5 = 0;
      *(_DWORD *)a5 = (*((_BYTE *)v21 + 16) & 0x40) != 0;
    }
    return 0;
  }
  if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v22 = MagpFindLensContext(ThreadContext, a3);
  v23 = v22;
  if ( !v22 )
    return updated;
  v24 = *((_DWORD *)v22 + 4);
  v25 = (_DWORD *)((char *)v23 + 240);
  v26 = (v24 >> 6) & 1;
  if ( (v24 & 0x20) != 0 || !*v25 )
  {
    *(_DWORD *)a5 = 0;
    *(_DWORD *)(a5 + 8) = 0;
    *(_QWORD *)(a5 + 40) = 0LL;
    *(_DWORD *)(a5 + 4) = *v25;
    *(_DWORD *)(a5 + 12) = *((_DWORD *)v23 + 61);
    *(_DWORD *)(a5 + 16) = *((_DWORD *)v23 + 62);
    *(_DWORD *)(a5 + 20) = *((_DWORD *)v23 + 63);
    return 0;
  }
  ThreadLock(a3, &v63);
  v27 = ReferenceDwmProcess();
  Object = (PVOID)ReferenceDwmApiPort(v28);
  UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
  if ( Object && v27 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(Object, (__int64)v23 + 32, *(_QWORD *)(a5 + 24), v26, a5);
  }
  else
  {
    DereferenceDwmApiPort(Object, v33, v34, v35);
    updated = -1073741823;
  }
  EnterCrit(1LL, 0LL);
  ThreadUnlock1(v37, v36, v38);
  DereferenceDwmProcess(v27);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a5 < 0 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  if ( *(_DWORD *)(a5 + 4) != *v25
    || *(_DWORD *)(a5 + 12) != *((_DWORD *)v23 + 61)
    || *(_DWORD *)(a5 + 16) != *((_DWORD *)v23 + 62)
    || *(_DWORD *)(a5 + 20) != *((_DWORD *)v23 + 63) )
  {
    v41 = *(void **)(a5 + 40);
    if ( v41 )
    {
      ObfDereferenceObject(v41);
      *(_QWORD *)(a5 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a5 + 8) )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  Handle = (void **)(a5 + 40);
  v40 = *(void **)(a5 + 40);
  if ( !v40 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  *Handle = 0LL;
  updated = ObOpenObjectByPointer(v40, 0x80u, 0LL, 4u, MmSectionObjectType, 1, Handle);
  ObfDereferenceObject(v40);
  if ( (updated & 0x80000000) == 0 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  return updated;
}
