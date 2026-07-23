/*
 * XREFs of sub_140AB43C0 @ 0x140AB43C0
 * Callers:
 *     sub_14020AABC @ 0x14020AABC (sub_14020AABC.c)
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_140346910 @ 0x140346910 (sub_140346910.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_1406A18C0 @ 0x1406A18C0 (sub_1406A18C0.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_14080F9EC @ 0x14080F9EC (sub_14080F9EC.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14090E160 @ 0x14090E160 (sub_14090E160.c)
 *     sub_14090E310 @ 0x14090E310 (sub_14090E310.c)
 *     sub_14090E5E0 @ 0x14090E5E0 (sub_14090E5E0.c)
 *     sub_14090E9C0 @ 0x14090E9C0 (sub_14090E9C0.c)
 *     sub_14090EC00 @ 0x14090EC00 (sub_14090EC00.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_140AB4A00 @ 0x140AB4A00 (sub_140AB4A00.c)
 *     sub_140B13368 @ 0x140B13368 (sub_140B13368.c)
 * Callees:
 *     sub_140721FD0 @ 0x140721FD0 (sub_140721FD0.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

__int64 __fastcall sub_140AB43C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 result; // rax
  char *v6; // rcx
  __int64 v7; // r9
  _QWORD **v8; // r10
  int v9; // eax
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  if ( (v4 & 9) == 0 )
  {
    if ( !a2 )
      return 0LL;
    v6 = sub_140AB4218((_QWORD **)(v3 + 208), &v10, 32);
    if ( !v6 )
      return 0LL;
    while ( 1 )
    {
      v9 = *((_DWORD *)v6 + 17);
      if ( v9 == 2 || v9 == 11 )
        break;
      result = (__int64)sub_140AB4218(v8, &v10, 32);
      v6 = (char *)result;
      if ( !result )
        return result;
    }
    if ( !sub_140721FD0(*((_QWORD *)v6 + 7), v7) )
      return 0LL;
    v4 = *(_DWORD *)(a1 + 48);
  }
  if ( (v4 & 1) != 0 )
    return 3221226533LL;
  else
    return 3221225852LL;
}
