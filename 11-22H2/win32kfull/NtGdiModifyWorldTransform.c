/*
 * XREFs of NtGdiModifyWorldTransform @ 0x1C0017DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C0017D38 (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     ?bWorldXformIdentity@@YAHPEBU_XFORML@@@Z @ 0x1C00182CC (-bWorldXformIdentity@@YAHPEBU_XFORML@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0099E60 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memcmp @ 0x1C01384A0 (memcmp.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C02CF940 (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall NtGdiModifyWorldTransform(__int64 a1, struct _XFORML *a2, unsigned int a3)
{
  unsigned int v4; // edi
  __int64 v7; // rdx
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct UMPDOBJ *v12; // rdx
  DC *v13; // rbx
  int v14; // ebx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v16; // eax
  struct Gre::Base::SESSION_GLOBALS *v17; // rsi
  DC *v18; // rax
  __int64 v19; // rcx
  DC *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _DC_ATTR *v23; // rax
  __int64 v24; // rsi
  DC *v26; // [rsp+20h] [rbp-59h] BYREF
  __int64 v27; // [rsp+28h] [rbp-51h]
  _BYTE v28[32]; // [rsp+30h] [rbp-49h] BYREF
  int v29; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v30[2]; // [rsp+58h] [rbp-21h] BYREF
  __int128 Buf1; // [rsp+68h] [rbp-11h] BYREF
  __int128 v32; // [rsp+78h] [rbp-1h]
  int v33; // [rsp+88h] [rbp+Fh]
  struct _XFORML v34; // [rsp+90h] [rbp+17h] BYREF

  v4 = 0;
  v27 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v28);
  LOBYTE(v7) = 1;
  v26 = (DC *)HmgLockEx(a1, v7, 0LL);
  if ( v26 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v10 = *ThreadWin32Thread) != 0 && (v11 = *(_QWORD *)(v10 + 40), v11 != v10 + 40) )
      v12 = (struct UMPDOBJ *)(v11 - 40);
    else
      v12 = 0LL;
    v13 = v26;
    if ( *((_WORD *)v26 + 6) == 1 )
    {
      *((_QWORD *)v26 + 271) = v12;
      *((_DWORD *)v26 + 544) = 0xFFFF;
      v13 = v26;
    }
    else if ( *((struct UMPDOBJ **)v26 + 271) != v12 )
    {
      XDCOBJ::LogUmpdCallbackStatus((XDCOBJ *)&v26, v12);
      v13 = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)v26 + 3);
      v26 = 0LL;
      goto LABEL_58;
    }
    if ( HIDWORD(v27) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v13 + 6) + 40LL) & 0x8000) == 0 )
      {
LABEL_13:
        _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
        v13 = 0LL;
        v26 = 0LL;
        goto LABEL_58;
      }
      v14 = *((_DWORD *)v13 + 528);
      if ( v14 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v13 = v26;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !*((_DWORD *)v13 + 528) )
        goto LABEL_22;
      *((_DWORD *)v13 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v13 = v26;
LABEL_22:
  if ( !v13 )
    goto LABEL_68;
  if ( (*((_DWORD *)v13 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v27) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v26);
      if ( UserAttr && !DC::SaveAttributes(v26, UserAttr) )
      {
        v13 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v26 + 3);
        v26 = 0LL;
        goto LABEL_58;
      }
      v13 = v26;
    }
    *((_DWORD *)v13 + 11) |= 2u;
    v13 = v26;
    LODWORD(v27) = 1;
  }
  if ( (*((_DWORD *)v13 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v13);
    v13 = v26;
  }
  if ( v13 )
  {
    memset(&v34, 0, sizeof(v34));
    if ( a2 )
    {
      v16 = ProbeAndConvertXFORM(a2, &v34);
      v13 = v26;
      v4 = v16;
    }
    else
    {
      LOBYTE(v4) = a3 == 1;
    }
    if ( !v4 )
    {
LABEL_58:
      if ( v13 )
      {
        if ( (_DWORD)v27 && (*((_DWORD *)v13 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v27) )
          {
            v23 = XDCOBJ::GetUserAttr((XDCOBJ *)&v26);
            if ( v23 )
              DC::RestoreAttributes(v26, v23);
            v13 = v26;
          }
          *((_DWORD *)v13 + 11) &= ~2u;
          v13 = v26;
          LODWORD(v27) = 0;
        }
        v29 = 0;
        v24 = *(_QWORD *)v13;
        HmgDecrementExclusiveReferenceCountEx(v13, HIDWORD(v27), &v29);
        if ( v29 )
          GrepDeleteDC(v24, 0x2000000LL);
      }
      goto LABEL_68;
    }
    Buf1 = 0LL;
    v33 = 0;
    v4 = 0;
    v32 = 0LL;
    v17 = Gre::Base::Globals(v9);
    if ( a3 != 1 )
    {
      if ( a3 == 2 || a3 == 3 )
      {
        vConvertXformToMatrix(&v34, &Buf1);
        v13 = v26;
        if ( (*(_DWORD *)(*((_QWORD *)v26 + 122) + 340LL) & 2) == 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v30, (struct XDCOBJ *)&v26, 0x203u);
          if ( !v30[0] || !(unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v30, (struct MATRIX *)&Buf1, a3) )
            goto LABEL_52;
          v13 = v26;
        }
        if ( !(unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
          goto LABEL_58;
        *(_OWORD *)((char *)v13 + 392) = Buf1;
        *(_OWORD *)((char *)v13 + 408) = v32;
        v21 = *((_QWORD *)v26 + 122);
        *(_OWORD *)(v21 + 356) = Buf1;
        *(_OWORD *)(v21 + 372) = v32;
        if ( memcmp(&Buf1, (char *)v17 + 6560, 0x20uLL) )
          goto LABEL_44;
LABEL_55:
        *(_DWORD *)(*((_QWORD *)v26 + 122) + 340LL) |= 0x80B2u;
        goto LABEL_56;
      }
      if ( a3 != 4 )
        goto LABEL_52;
      if ( !(unsigned int)bWorldXformIdentity(&v34) )
      {
        vConvertXformToMatrix(&v34, &Buf1);
        if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
        {
          v18 = v26;
          *(_OWORD *)((char *)v26 + 392) = Buf1;
          *(_OWORD *)((char *)v18 + 408) = v32;
          v19 = *((_QWORD *)v26 + 122);
          *(_OWORD *)(v19 + 356) = Buf1;
          *(_OWORD *)(v19 + 372) = v32;
LABEL_44:
          v20 = v26;
          *(_DWORD *)(*((_QWORD *)v26 + 122) + 340LL) |= 0x80B0u;
          *(_DWORD *)(*((_QWORD *)v20 + 122) + 340LL) &= ~2u;
LABEL_56:
          v13 = v26;
          goto LABEL_57;
        }
LABEL_52:
        v13 = v26;
        goto LABEL_58;
      }
    }
    v13 = v26;
    if ( (*(_DWORD *)(*((_QWORD *)v26 + 122) + 340LL) & 2) != 0 )
    {
LABEL_57:
      v4 = 1;
      goto LABEL_58;
    }
    *(_OWORD *)((char *)v26 + 392) = *((_OWORD *)v17 + 410);
    *(_OWORD *)((char *)v13 + 408) = *((_OWORD *)v17 + 411);
    v22 = *((_QWORD *)v26 + 122);
    *(_OWORD *)(v22 + 356) = *((_OWORD *)v17 + 410);
    *(_OWORD *)(v22 + 372) = *((_OWORD *)v17 + 411);
    goto LABEL_55;
  }
LABEL_68:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
  return v4;
}
