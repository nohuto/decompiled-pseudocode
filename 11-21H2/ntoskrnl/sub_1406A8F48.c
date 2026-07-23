/*
 * XREFs of sub_1406A8F48 @ 0x1406A8F48
 * Callers:
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_140281830 @ 0x140281830 (sub_140281830.c)
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406A8F48(unsigned int *a1, __int64 a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int v6; // edi
  ULONG_PTR v7; // rax
  void *v8; // rsi
  int v9; // ebx
  signed __int64 *v10; // r14
  struct _EX_RUNDOWN_REF *v11; // rbp
  void *v13; // rbx
  int v14; // r12d
  int v15; // esi
  signed __int64 *v16; // r14
  struct _EX_RUNDOWN_REF *v17; // rbp
  _OWORD v19[3]; // [rsp+30h] [rbp-88h] BYREF

  v4 = a4;
  v6 = -1073741811;
  memset(v19, 0, sizeof(v19));
  if ( !a1 )
  {
    v13 = (void *)sub_1402A1770(0LL);
    if ( v13 )
    {
      do
      {
        v14 = sub_140300B40((__int64)v13);
        v15 = sub_1402312E0((ULONG_PTR)v13);
        if ( v15 >= 0 )
        {
          v16 = (signed __int64 *)sub_140281830();
          v17 = sub_140281870(v16);
          if ( v17 )
          {
            v15 = sub_14042A5E0(v17[2].Count, a2);
            sub_140281930(v16, (__int64)v17);
          }
          sub_140231240((__int64)v13, (__int64)v19);
        }
        if ( v14 )
          v15 = v6;
        v6 = v15;
        v13 = (void *)sub_1402A1770(v13);
      }
      while ( v13 );
      v4 = a4;
    }
    v9 = 0;
LABEL_8:
    if ( v4 )
      *v4 = v6;
    return (unsigned int)v9;
  }
  v7 = sub_1402DF880(*a1);
  v8 = (void *)v7;
  if ( !v7 )
    return (unsigned int)-1073741811;
  v9 = sub_1402312E0(v7);
  if ( v9 < 0 )
  {
    v9 = -1073741811;
  }
  else
  {
    v10 = (signed __int64 *)sub_140281830();
    v11 = sub_140281870(v10);
    if ( v11 )
    {
      v6 = sub_14042A5E0(v11[2].Count, a2);
      sub_140281930(v10, (__int64)v11);
    }
    else
    {
      v9 = -1073741811;
    }
    sub_140231240((__int64)v8, (__int64)v19);
  }
  ObfDereferenceObject(v8);
  if ( v9 >= 0 )
    goto LABEL_8;
  return (unsigned int)v9;
}
