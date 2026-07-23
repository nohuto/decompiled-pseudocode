/*
 * XREFs of ntoskrnl_16 @ 0x140764AE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140764B98 @ 0x140764B98 (sub_140764B98.c)
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 */

__int64 __fastcall ntoskrnl_16(__int64 a1, _QWORD *a2)
{
  void *v2; // rbx
  PVOID v4; // rcx
  int v5; // esi
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  void *v8; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v7[1] = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a1 )
    v4 = *(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v4 = qword_140C46278;
  v8 = 0LL;
  v7[0] = 0;
  v5 = sub_140764CE4(v4, sub_1406DA910, v7);
  if ( v5 < 0 )
  {
    v2 = v8;
  }
  else
  {
    *a2 = v8;
    v8 = 0LL;
  }
  sub_140764B98(v2);
  return (unsigned int)v5;
}
