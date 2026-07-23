/*
 * XREFs of sub_1406A0010 @ 0x1406A0010
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14067F788 @ 0x14067F788 (sub_14067F788.c)
 *     sub_1406E25B0 @ 0x1406E25B0 (sub_1406E25B0.c)
 */

__int64 __fastcall sub_1406A0010(__int64 a1, _BYTE *a2)
{
  int v2; // esi
  __int64 v5; // r15
  __int64 v7; // rbx
  NTSTATUS v8; // edi

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
      if ( v7 )
        break;
LABEL_17:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v7 & 1) != 0 )
    {
      v8 = sub_1406E25B0(v7 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v8 >= 0 )
      {
        sub_14067F788(v7);
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = 0LL;
      }
    }
    else
    {
      v8 = TmRollbackEnlistment_0(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8 * v5), 0LL);
      if ( v8 >= 0 )
      {
        ObfDereferenceObject((PVOID)v7);
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = 0LL;
LABEL_14:
        if ( v2 >= 0 && v8 < 0 )
          v2 = v8;
        goto LABEL_17;
      }
    }
    if ( v8 == -1072103403 || v8 == -1072103405 || v8 == -1072103402 )
    {
      v8 = 0;
      if ( a2 )
        *a2 = 1;
    }
    goto LABEL_14;
  }
  return (unsigned int)v2;
}
