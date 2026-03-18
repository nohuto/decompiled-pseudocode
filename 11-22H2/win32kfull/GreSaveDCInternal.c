/*
 * XREFs of GreSaveDCInternal @ 0x1C0092580
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00065F8 (-UT_InvertCaret@@YAXXZ.c)
 *     NtGdiSaveDC @ 0x1C0092560 (NtGdiSaveDC.c)
 *     xxxClientExtTextOutW @ 0x1C021212C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0212EB8 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02132C0 (xxxClientPSMTextOut.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0222580 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 * Callees:
 *     ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C00A60E8 (-bSavePath@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011B878 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1C028712C (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 */

__int64 __fastcall GreSaveDCInternal(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // r13
  __int64 v5; // rdx
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  struct UMPDOBJ *v9; // rdx
  DC *v10; // r8
  int v11; // ebx
  unsigned int v12; // edi
  DC *v13; // rcx
  struct _DC_ATTR *v14; // rax
  __int64 v15; // rbx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // esi
  __int64 v23; // r12
  int v24; // r15d
  unsigned int v25; // edi
  __int64 v26; // rdi
  int v27; // eax
  DC *v28; // rcx
  __int64 v29; // rax
  _QWORD v30[2]; // [rsp+28h] [rbp-29h] BYREF
  int v31; // [rsp+38h] [rbp-19h]
  DC *v32; // [rsp+40h] [rbp-11h] BYREF
  __int64 v33; // [rsp+48h] [rbp-9h]
  _BYTE v34[32]; // [rsp+50h] [rbp-1h] BYREF
  int v35; // [rsp+C8h] [rbp+77h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = Gre::Base::Globals(a1);
  v33 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v34);
  LOBYTE(v5) = 1;
  v32 = (DC *)HmgLockEx(a1, v5, 0LL);
  if ( v32 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v7 = *ThreadWin32Thread) != 0 && (v8 = *(_QWORD *)(v7 + 40), v8 != v7 + 40) )
      v9 = (struct UMPDOBJ *)(v8 - 40);
    else
      v9 = 0LL;
    v10 = v32;
    if ( *((_WORD *)v32 + 6) == 1 )
    {
      *((_QWORD *)v32 + 271) = v9;
      *((_DWORD *)v32 + 544) = 0xFFFF;
      v10 = v32;
    }
    else if ( *((struct UMPDOBJ **)v32 + 271) != v9 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v32, v9);
      goto LABEL_16;
    }
    if ( HIDWORD(v33) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v10 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_13:
        _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
LABEL_17:
        v12 = 0;
        v32 = 0LL;
LABEL_18:
        EngSetLastError(6u);
        goto LABEL_19;
      }
      v11 = *((_DWORD *)v10 + 528);
      if ( v11 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v10 = v32;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*((_DWORD *)v10 + 528) )
        goto LABEL_35;
      *((_DWORD *)v10 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v10 = v32;
LABEL_35:
  if ( !v10 )
    goto LABEL_44;
  if ( (*((_DWORD *)v10 + 11) & 2) == 0 )
  {
    if ( HIDWORD(v33) )
    {
LABEL_41:
      *((_DWORD *)v10 + 11) |= 2u;
      v10 = v32;
      LODWORD(v33) = 1;
      goto LABEL_42;
    }
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v32);
    if ( !UserAttr || DC::SaveAttributes(v32, UserAttr) )
    {
      v10 = v32;
      goto LABEL_41;
    }
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)v32 + 3);
    goto LABEL_17;
  }
LABEL_42:
  if ( (*((_DWORD *)v10 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v10);
    v10 = v32;
  }
LABEL_44:
  v12 = 0;
  if ( !v10 )
    goto LABEL_18;
  if ( !a2 )
  {
    if ( (*(_DWORD *)(HmgPentryFromPobj(v10) + 8) & 0xFFFFFFFE) == 0 )
      goto LABEL_18;
    v10 = v32;
  }
  v18 = *((_QWORD *)v10 + 122);
  v19 = *(_DWORD *)(v18 + 152);
  if ( (v19 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v10, *(_QWORD *)(v18 + 160));
    v10 = v32;
  }
  if ( (v19 & 0x2000) != 0 )
  {
    GreDCSelectPen(v10, *(_QWORD *)(*((_QWORD *)v10 + 122) + 168LL));
    v10 = v32;
  }
  v20 = *((_QWORD *)v10 + 6);
  v36 = v20;
  if ( (*(_DWORD *)(v20 + 40) & 1) != 0 )
    GreLockVisRgn(v20);
  v21 = *((_QWORD *)v4 + 5);
  GreAcquireSemaphore(v21);
  v22 = *((_DWORD *)v32 + 9) & 0x800;
  if ( v22 )
    DC::bMakeInfoDC(v32, 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v30, (struct DCOBJ *)&v32);
  if ( v30[0] )
  {
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v36);
    v23 = *((_QWORD *)v32 + 14);
    *((_QWORD *)v32 + 14) = *(_QWORD *)v30[0];
    v24 = *(_DWORD *)(v30[0] + 104LL);
    if ( (unsigned int)bSavePath((struct XDCOBJ *)&v32, v24 + 1) )
    {
      v25 = *(_DWORD *)(v30[0] + 104LL);
      if ( (unsigned int)bSaveRegion((struct XDCOBJ *)&v32, v25 + 1) )
      {
        if ( (unsigned int)GreSetDCOwnerEx(*(_QWORD *)v30[0], 2147483666LL, 0LL, 0LL) )
        {
          v31 = 1;
          PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v36);
          if ( (*((_DWORD *)v32 + 9) & 0x4000) != 0 )
            *(_DWORD *)(v30[0] + 36LL) |= 0x4000u;
          v26 = *(_QWORD *)(v30[0] + 496LL);
          if ( v26 )
          {
            v27 = *(_DWORD *)(v26 + 112);
            if ( (v27 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v30[0] + 496LL));
            }
            else if ( v27 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v30[0] + 496LL));
              ++*(_DWORD *)(v26 + 168);
            }
          }
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 17));
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 18));
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 19));
          INC_SHARE_REF_CNT(*((_QWORD *)v32 + 12));
          v28 = v32;
          v29 = *((_QWORD *)v32 + 11);
          if ( v29 != *((_QWORD *)v4 + 750) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 56));
            v28 = v32;
          }
          v12 = *((_DWORD *)v28 + 26);
          *((_DWORD *)v28 + 26) = v12 + 1;
          goto LABEL_74;
        }
        vRestoreRegion(&v32, v25);
      }
      vRestorePath((struct XDCOBJ *)&v32, v24);
    }
    v12 = 0;
    *((_QWORD *)v32 + 14) = v23;
  }
  else
  {
    EngSetLastError(8u);
  }
LABEL_74:
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v30);
  if ( v22 )
    DC::bMakeInfoDC(v32, 1);
  if ( (*(_DWORD *)(v36 + 40) & 1) != 0 )
    GreUnlockVisRgn(v36);
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem");
    GreReleaseSemaphoreInternal(v21);
  }
LABEL_19:
  v13 = v32;
  if ( v32 )
  {
    if ( (_DWORD)v33 && (*((_DWORD *)v32 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v33) )
      {
        v14 = XDCOBJ::GetUserAttr((XDCOBJ *)&v32);
        v13 = v32;
        if ( v14 )
        {
          DC::RestoreAttributes(v32, v14);
          v13 = v32;
        }
      }
      *((_DWORD *)v13 + 11) &= ~2u;
      v13 = v32;
      LODWORD(v33) = 0;
    }
    v35 = 0;
    v15 = *(_QWORD *)v13;
    HmgDecrementExclusiveReferenceCountEx(v13, HIDWORD(v33), &v35);
    if ( v35 )
      GrepDeleteDC(v15, 0x2000000LL);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v34);
  return v12;
}
