/*
 * XREFs of sub_14026DFF0 @ 0x14026DFF0
 * Callers:
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_14082A644 @ 0x14082A644 (sub_14082A644.c)
 * Callees:
 *     sub_140229640 @ 0x140229640 (sub_140229640.c)
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 */

unsigned __int64 __fastcall sub_14026DFF0(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  result = sub_14026E05C(*(_QWORD *)(a1 + 96), a1, 0LL);
  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 112);
    if ( result != v3 )
    {
      v4 = v3 - result;
      sub_14028CE10(*(_QWORD *)(a1 + 96), v4);
      result = sub_140229640(*(_QWORD *)(a1 + 96), v4, *(_DWORD *)(a1 + 120));
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  return result;
}
