/*
 * XREFs of sub_140789AEC @ 0x140789AEC
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406BACAC @ 0x1406BACAC (sub_1406BACAC.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_14077C924 @ 0x14077C924 (sub_14077C924.c)
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14078A1A8 @ 0x14078A1A8 (sub_14078A1A8.c)
 *     sub_14078A470 @ 0x14078A470 (sub_14078A470.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall sub_140789AEC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  int v9; // ebx
  int v10; // edi
  int v11; // ebx
  int v13; // eax
  int v14; // [rsp+48h] [rbp-39h] BYREF
  int v15; // [rsp+4Ch] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  int v17; // [rsp+58h] [rbp-29h] BYREF
  int v18; // [rsp+5Ch] [rbp-25h] BYREF
  int v19; // [rsp+60h] [rbp-21h] BYREF
  __int128 v20; // [rsp+68h] [rbp-19h] BYREF
  int v21[4]; // [rsp+78h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp+Fh] BYREF

  v6 = a6;
  v14 = 0;
  v15 = 0;
  v19 = 0;
  *a6 = 0;
  v18 = 0;
  v17 = 0;
  Handle = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v21 = 0LL;
  LOBYTE(a6) = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = sub_14078A1A8(a1, a2, a5, &v20);
  if ( v9 < 0 )
    goto LABEL_15;
  if ( *(_QWORD *)v21
    && (v10 = DWORD1(v20), (unsigned int)(DWORD1(v20) - 1) <= 1)
    && DWORD2(v20) == 1
    && !v21[3]
    && a3
    && a4 >= 8 )
  {
    v11 = sub_14077C924(*(__int64 *)&qword_140D00AC0, *(__int64 *)v21, 1, 1, 0, (__int64)&Handle);
    if ( v11 >= 0 )
    {
      if ( v10 == 2 && (unsigned __int8)sub_14078A600(2LL) )
      {
LABEL_11:
        LODWORD(a6) = 4;
        if ( (int)sub_14077FC64(Handle, L"Phantom", &v14, &v15, (unsigned int *)&a6) >= 0 && v14 == 4 && (_DWORD)a6 == 4 )
        {
          v13 = v11;
          if ( v15 )
            v13 = -1073741810;
          v11 = v13;
        }
        goto LABEL_12;
      }
      SeCaptureSubjectContext(&SubjectContext);
      v11 = sub_14077D454(
              *(__int64 *)&qword_140D00AC0,
              *(const wchar_t **)v21,
              1,
              (__int64)Handle,
              &SubjectContext,
              &a6);
      SeReleaseSubjectContext(&SubjectContext);
      if ( v11 >= 0 )
      {
        if ( !(_BYTE)a6 )
          goto LABEL_20;
        if ( v10 == 2 )
          goto LABEL_11;
        if ( (int)sub_14078A470(
                    qword_140D00AC0,
                    v21[0],
                    (_DWORD)Handle,
                    (unsigned int)&v19,
                    (__int64)&v18,
                    (__int64)&v17) < 0 )
LABEL_20:
          v11 = -1073741810;
      }
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  v9 = sub_14078A584((unsigned int)v11, (unsigned int)v22, a3, a4, v6);
LABEL_15:
  sub_1406BACAC((__int64)&v20);
  return (unsigned int)v9;
}
