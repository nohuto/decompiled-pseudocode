/*
 * XREFs of sub_1409A5E3C @ 0x1409A5E3C
 * Callers:
 *     sub_1409A6030 @ 0x1409A6030 (sub_1409A6030.c)
 * Callees:
 *     sub_1409A3220 @ 0x1409A3220 (sub_1409A3220.c)
 *     sub_1409A4D70 @ 0x1409A4D70 (sub_1409A4D70.c)
 *     sub_1409A556C @ 0x1409A556C (sub_1409A556C.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1409A5E3C(__int64 a1, int a2)
{
  char v3; // si
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v3 = 0;
  if ( !sub_1409A556C(a1, a2, &v12) )
    return;
  v4 = (_QWORD **)(v12 + 48);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v7 = v5 - 1;
    v6[1] = v4;
    v8 = sub_1409A3220(&v13, a1, *((_DWORD *)v5 - 2));
    if ( v8 < 0 )
    {
      sub_1409A8628("TtmpSetDisplayRequestEnded", 736LL, (unsigned int)v8, 0xFFFFFFFFLL);
      goto LABEL_13;
    }
    v9 = v13;
    if ( *(_DWORD *)(v13 + 24) != 1416459348 )
      goto LABEL_13;
    v10 = *(_DWORD *)(v13 + 32);
    if ( v10 )
    {
      v11 = v10 - 1;
      *(_DWORD *)(v13 + 32) = v11;
      if ( !v11 )
      {
        *(_DWORD *)(v9 + 36) |= 0x24u;
        v3 = 1;
      }
LABEL_13:
      ExFreePoolWithTag(v7, 0x52507454u);
    }
    else
    {
      sub_1409A8628("TtmpSetDisplayRequestEnded", 718LL, 3221225485LL, 0xFFFFFFFFLL);
    }
  }
  if ( v3 )
    sub_1409A4D70(a1, 2);
}
