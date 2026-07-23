/*
 * XREFs of sub_140251BDC @ 0x140251BDC
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140640EE8 @ 0x140640EE8 (sub_140640EE8.c)
 *     sub_140641354 @ 0x140641354 (sub_140641354.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall sub_140251BDC(__int64 a1, __int64 a2)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // rbp
  int v4; // r14d
  __int64 v5; // r15
  _QWORD *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rbx

  result = KeGetCurrentThread();
  v3 = *((_QWORD *)result + 23);
  v4 = *(_DWORD *)(v3 + 2176);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v3 + 2184);
    v6 = (_QWORD *)(v3 + 2208);
    while ( 1 )
    {
      v7 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
        __fastfail(3u);
      *v6 = v8;
      *(_QWORD *)(v8 + 8) = v6;
      if ( v7 == v6 )
        break;
      v9 = (_QWORD *)v7[2];
      sub_14042A5E0(v5, v9[23]);
      sub_140641354(v9);
      ExFreePoolWithTag(v7, 0);
    }
    sub_14042A5E0(v5, a2);
    *(_QWORD *)(v3 + 2184) = 0LL;
    return (struct _KTHREAD *)sub_140640EE8((unsigned int)(v4 - 1));
  }
  return result;
}
