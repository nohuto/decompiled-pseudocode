/*
 * XREFs of sub_1405F1BBC @ 0x1405F1BBC
 * Callers:
 *     sub_14025BC50 @ 0x14025BC50 (sub_14025BC50.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 *     sub_14034CEB0 @ 0x14034CEB0 (sub_14034CEB0.c)
 *     sub_140351BF4 @ 0x140351BF4 (sub_140351BF4.c)
 *     sub_1403628D8 @ 0x1403628D8 (sub_1403628D8.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140364794 @ 0x140364794 (sub_140364794.c)
 *     sub_140364860 @ 0x140364860 (sub_140364860.c)
 *     sub_14036E174 @ 0x14036E174 (sub_14036E174.c)
 *     sub_140370928 @ 0x140370928 (sub_140370928.c)
 *     sub_140371588 @ 0x140371588 (sub_140371588.c)
 *     RtlFreeHeap @ 0x140371770 (RtlFreeHeap.c)
 *     sub_1403717D4 @ 0x1403717D4 (sub_1403717D4.c)
 *     RtlAllocateHeap @ 0x140371850 (RtlAllocateHeap.c)
 *     RtlSizeHeap @ 0x1405E50D0 (RtlSizeHeap.c)
 *     sub_1405E80B0 @ 0x1405E80B0 (sub_1405E80B0.c)
 *     sub_1405E8A08 @ 0x1405E8A08 (sub_1405E8A08.c)
 *     sub_1405E8DF8 @ 0x1405E8DF8 (sub_1405E8DF8.c)
 *     sub_1405E952C @ 0x1405E952C (sub_1405E952C.c)
 *     sub_1405E966C @ 0x1405E966C (sub_1405E966C.c)
 *     sub_1405E9E8C @ 0x1405E9E8C (sub_1405E9E8C.c)
 *     sub_1405EA0E4 @ 0x1405EA0E4 (sub_1405EA0E4.c)
 *     sub_1405EA72C @ 0x1405EA72C (sub_1405EA72C.c)
 *     sub_1405EA9DC @ 0x1405EA9DC (sub_1405EA9DC.c)
 *     sub_1405EAD20 @ 0x1405EAD20 (sub_1405EAD20.c)
 *     sub_1405EADE8 @ 0x1405EADE8 (sub_1405EADE8.c)
 *     sub_1405EAE78 @ 0x1405EAE78 (sub_1405EAE78.c)
 *     sub_1405EB088 @ 0x1405EB088 (sub_1405EB088.c)
 *     sub_1405F1C10 @ 0x1405F1C10 (sub_1405F1C10.c)
 *     sub_1405F2650 @ 0x1405F2650 (sub_1405F2650.c)
 *     RtlZeroHeap @ 0x1409BAF80 (RtlZeroHeap.c)
 *     sub_1409BB454 @ 0x1409BB454 (sub_1409BB454.c)
 * Callees:
 *     sub_1405F1F7C @ 0x1405F1F7C (sub_1405F1F7C.c)
 */

void __fastcall sub_1405F1BBC(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( qword_140C0BEB0 != a2 )
  {
    qword_140C0BEC8 = a5;
    qword_140C0BED0 = a6;
    dword_140C0BEA8 = a1;
    qword_140C0BEB0 = a2;
    qword_140C0BEB8 = a3;
    qword_140C0BEC0 = a4;
    sub_1405F1F7C();
  }
}
