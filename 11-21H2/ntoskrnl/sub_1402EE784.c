/*
 * XREFs of sub_1402EE784 @ 0x1402EE784
 * Callers:
 *     sub_1402ECD10 @ 0x1402ECD10 (sub_1402ECD10.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     sub_1402EDFE8 @ 0x1402EDFE8 (sub_1402EDFE8.c)
 *     sub_1402EE4D4 @ 0x1402EE4D4 (sub_1402EE4D4.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_140570750 @ 0x140570750 (sub_140570750.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1402EE784(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *result; // rax
  void (__fastcall __noreturn *v8)(); // r9
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  _QWORD **v14; // r8

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 80) && *(_BYTE *)(v1 + 586) )
  {
    v2 = 600LL;
  }
  else
  {
    *(_BYTE *)(a1 + 80) = *(_BYTE *)(v1 + 586);
    v2 = 152LL;
  }
  v3 = v2 + v1;
  v4 = *(char *)(a1 + 81);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( !(_BYTE)v4 )
      goto LABEL_6;
    v8 = *(void (__fastcall __noreturn **)())(a1 + 32);
    if ( v8 == sub_1406C2560 )
    {
      *(_BYTE *)(v1 + 194) |= 2u;
      v9 = (_QWORD *)(a1 + 16);
      v10 = v3 + 16 * v4;
      result = *(_QWORD **)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        goto LABEL_23;
      *v9 = result;
      v9[1] = v10;
      result[1] = v9;
      *(_QWORD *)v10 = v9;
      return result;
    }
    if ( (char *)v8 != (char *)sub_140962BA0 )
    {
LABEL_6:
      v5 = (_QWORD *)(a1 + 16);
      v6 = v3 + 16 * v4;
      result = *(_QWORD **)(v6 + 8);
      if ( *result == v6 )
      {
        *v5 = v6;
        v5[1] = result;
        *result = v5;
        *(_QWORD *)(v6 + 8) = v5;
        return result;
      }
LABEL_23:
      __fastfail(3u);
    }
    v14 = (_QWORD **)(16 * v4 + v3);
    for ( result = *v14; result != v14; result = (_QWORD *)*result )
      ;
    *(_BYTE *)(v1 + 194) |= 1u;
  }
  else
  {
    v11 = (_QWORD *)(v3 + 16 * v4);
    for ( result = (_QWORD *)v11[1]; result != v11 && result[4]; result = (_QWORD *)result[1] )
      ;
  }
  v12 = (_QWORD *)*result;
  v13 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD **)(*result + 8LL) != result )
    goto LABEL_23;
  *v13 = v12;
  v13[1] = result;
  v12[1] = v13;
  *result = v13;
  return result;
}
