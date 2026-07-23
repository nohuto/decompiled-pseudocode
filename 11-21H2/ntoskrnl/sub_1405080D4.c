/*
 * XREFs of sub_1405080D4 @ 0x1405080D4
 * Callers:
 *     sub_1405081B8 @ 0x1405081B8 (sub_1405081B8.c)
 *     sub_140508364 @ 0x140508364 (sub_140508364.c)
 * Callees:
 *     sub_1402520D4 @ 0x1402520D4 (sub_1402520D4.c)
 *     sub_140252134 @ 0x140252134 (sub_140252134.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_1405080D4(__int64 a1, ULONG_PTR **a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  ULONG_PTR *v7; // rdi
  _QWORD *v8; // rdx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v9[0] = 0LL;
  if ( (int)sub_140252380(a1, v9) >= 0 )
  {
    v7 = sub_140252134(v9[0]);
    if ( v7 )
    {
      v8 = sub_1402520D4((unsigned int *)v9);
      if ( v8 )
      {
        *a2 = v7;
        result = 0LL;
        v4 = v8[5];
        goto LABEL_10;
      }
      sub_14051E038((_DWORD)v7, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 668);
    }
    else
    {
      sub_14051E038(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 652);
    }
    result = 3221226021LL;
  }
  else
  {
    sub_14051E038(0, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 639);
    result = 3221225485LL;
  }
  *a2 = 0LL;
LABEL_10:
  *a3 = v4;
  return result;
}
