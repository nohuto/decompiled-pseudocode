/*
 * XREFs of sub_14036AAF4 @ 0x14036AAF4
 * Callers:
 *     sub_14038AF44 @ 0x14038AF44 (sub_14038AF44.c)
 *     sub_1405D4150 @ 0x1405D4150 (sub_1405D4150.c)
 *     sub_14063DABC @ 0x14063DABC (sub_14063DABC.c)
 *     sub_1407F0268 @ 0x1407F0268 (sub_1407F0268.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x140860CFC (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14098C7F4 @ 0x14098C7F4 (sub_14098C7F4.c)
 *     sub_140A6CA38 @ 0x140A6CA38 (sub_140A6CA38.c)
 * Callees:
 *     sub_14036AC64 @ 0x14036AC64 (sub_14036AC64.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14036AAF4(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r14
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  bool v11; // r8
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v14 = *a3;
  result = sub_14036AC64(a1, a2, &v14, 0LL);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = v14;
  v10 = result;
  v11 = (int)result >= 0;
  if ( v8 )
  {
    v12 = (_BYTE *)(((unsigned __int64)a2 + v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v12 - (_BYTE *)a2 + v8;
    *a3 = v13;
    if ( v11 && v3 >= v13 )
    {
      a2[4] = v12 - (_BYTE *)a2;
      *a2 = v13;
      memmove(v12, (const void *)((a1 + 39) & 0xFFFFFFFFFFFFFFF8uLL), *(_QWORD *)(a1 + 24));
      return v10;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    if ( (int)result >= 0 )
    {
      a2[4] = 0LL;
      *a2 = v9;
    }
    *a3 = v9;
  }
  return result;
}
