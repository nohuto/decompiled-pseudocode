/*
 * XREFs of sub_14036DAE4 @ 0x14036DAE4
 * Callers:
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 *     sub_14036DA68 @ 0x14036DA68 (sub_14036DA68.c)
 *     sub_140373F80 @ 0x140373F80 (sub_140373F80.c)
 *     sub_14059676C @ 0x14059676C (sub_14059676C.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 */

_QWORD *__fastcall sub_14036DAE4(__int64 a1, int a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax
  _DWORD *v5; // rcx

  v2 = (_QWORD *)(a1 + 24);
  v3 = (_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16608LL);
  if ( !a2 )
  {
    result = *(_QWORD **)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16616LL);
    if ( (_QWORD *)*result == v3 )
    {
      *v2 = v3;
      *(_QWORD *)(a1 + 32) = result;
      *result = v2;
      v3[1] = v2;
      goto LABEL_4;
    }
LABEL_8:
    __fastfail(3u);
  }
  result = (_QWORD *)*v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 )
    goto LABEL_8;
  *v2 = result;
  *(_QWORD *)(a1 + 32) = v3;
  result[1] = v2;
  *v3 = v2;
LABEL_4:
  v5 = *(_DWORD **)(a1 + 104);
  if ( v5 )
    return (_QWORD *)sub_14024B0B4(v5, 1);
  return result;
}
