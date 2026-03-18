/*
 * XREFs of ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00419B4
 * Callers:
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015D85C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C015DA6C (--1-$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C0160034 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 */

__int64 __fastcall bSaveRegion(DC **a1, int a2)
{
  DC *v2; // rax
  unsigned int v3; // edi
  __int64 v5; // kr00_8
  HDC v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-19h] BYREF
  __int64 v12; // [rsp+28h] [rbp-11h] BYREF
  int v13; // [rsp+30h] [rbp-9h]
  _QWORD v14[2]; // [rsp+38h] [rbp-1h] BYREF
  _BYTE v15[32]; // [rsp+48h] [rbp+Fh] BYREF
  _BYTE v16[16]; // [rsp+68h] [rbp+2Fh] BYREF
  struct _RECTL v17; // [rsp+78h] [rbp+3Fh] BYREF

  v2 = *a1;
  v3 = 0;
  if ( a2 == 1 )
  {
    v5 = *((_QWORD *)v2 + 64);
    v17.top = HIDWORD(v5);
    v17.right = v5;
    v17.left = 0;
    v17.bottom = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v12);
    if ( v12 )
    {
      if ( *((_QWORD *)*a1 + 62) )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
      }
      RGNOBJ::vSet((RGNOBJ *)&v12, &v17);
      DC::AcquireDcVisRgnExclusive(*a1);
      *((_QWORD *)*a1 + 142) = v12;
      wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(v16);
      if ( v13 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
      return 1LL;
    }
    else
    {
      if ( v13 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v12);
      return 0LL;
    }
  }
  else
  {
    v7 = (HDC)*((_QWORD *)v2 + 14);
    v14[0] = 0LL;
    v14[1] = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v15);
    XDCOBJ::vLock((XDCOBJ *)v14, v7);
    v8 = v14[0];
    if ( v14[0] )
    {
      v9 = *(_QWORD *)(v14[0] + 168LL);
      if ( v9 )
      {
        ++*(_DWORD *)(v9 + 32);
        v8 = v14[0];
      }
      v10 = *(_QWORD *)(v8 + 160);
      if ( v10 )
        ++*(_DWORD *)(v10 + 32);
      v3 = 1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return v3;
  }
}
