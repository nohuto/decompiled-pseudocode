/*
 * XREFs of sub_140222280 @ 0x140222280
 * Callers:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_1402221F4 @ 0x1402221F4 (sub_1402221F4.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140568560 @ 0x140568560 (sub_140568560.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140222280(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 34984);
  if ( v1 && *(_QWORD *)(a1 + 34992) != v1 )
  {
    result = *(unsigned int *)(a1 + 32436);
    if ( *(_DWORD *)(a1 + 32428) < (int)result )
      *(_QWORD *)(a1 + 34992) = v1;
  }
  return result;
}
