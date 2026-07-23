/*
 * XREFs of sub_14038A0CC @ 0x14038A0CC
 * Callers:
 *     sub_140389F90 @ 0x140389F90 (sub_140389F90.c)
 *     sub_14052C880 @ 0x14052C880 (sub_14052C880.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14038A0CC(int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int16 v4; // [rsp+0h] [rbp-8h]

  _disable();
  result = qword_140C4C728;
  v3 = 32LL * HIDWORD(KeGetPcr()[1].LockArray);
  *(_DWORD *)(v3 + qword_140C4C728 + 20) = 0;
  *(_DWORD *)(v3 + result + 24) = a1;
  *(_DWORD *)(v3 + result + 16) = a2;
  if ( (v4 & 0x200) != 0 )
    _enable();
  return result;
}
