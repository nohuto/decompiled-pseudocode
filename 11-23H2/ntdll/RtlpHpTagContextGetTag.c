/*
 * XREFs of RtlpHpTagContextGetTag @ 0x1800A04A4
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x180065D30 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpHpTagContextAllocateTag @ 0x180065AB4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagContextFindMapping @ 0x180067444 (RtlpHpTagContextFindMapping.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpTagContextGetTag(__int64 a1, unsigned __int64 a2)
{
  void *SubProcessTag; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int128 *v8; // r8
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 Mapping; // rax
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v16 = (unsigned __int64)SubProcessTag;
  v4 = (__int64)SubProcessTag - RtlpHpNullGUID;
  if ( SubProcessTag == (void *)RtlpHpNullGUID )
    v4 = *((_QWORD *)&v16 + 1) - qword_180188250;
  if ( !v4 )
    return 0LL;
  if ( word_180185E04 )
  {
    v6 = *(_QWORD *)(qword_180185DF8 + 8LL * (unsigned __int16)word_180185E04 - 8);
    v7 = *(_QWORD *)(v6 + 16) - (_QWORD)SubProcessTag;
    if ( !v7 )
      v7 = *(_QWORD *)(v6 + 24) - *((_QWORD *)&v16 + 1);
    if ( !v7 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 32), a2);
      result = *(unsigned __int16 *)(v6 + 40);
      goto LABEL_15;
    }
  }
  v8 = &v16;
  v9 = 314159LL;
  v10 = 2LL;
  do
  {
    v11 = *(unsigned __int8 *)v8;
    v8 = (__int128 *)((char *)v8 + 8);
    v12 = *((unsigned __int8 *)v8 - 2)
        + 37
        * (*((unsigned __int8 *)v8 - 3)
         + 37
         * (*((unsigned __int8 *)v8 - 4)
          + 37
          * (*((unsigned __int8 *)v8 - 5)
           + 37 * (*((unsigned __int8 *)v8 - 6) + 37 * (*((unsigned __int8 *)v8 - 7) + 37 * (v11 + 37 * v9))))));
    v13 = *((unsigned __int8 *)v8 - 1);
    v9 = v13 + 37 * v12;
    --v10;
  }
  while ( v10 );
  Mapping = RtlpHpTagContextFindMapping((__int64)&RtlpHpTagContext, (__int64)&v16, v13 + 37 * v12);
  v15 = Mapping;
  if ( !Mapping
    || (_InterlockedExchangeAdd64((volatile signed __int64 *)(Mapping + 32), a2),
        result = *(unsigned __int16 *)(Mapping + 40),
        !(_WORD)result) )
  {
    result = RtlpHpTagContextAllocateTag(v15, &v16, v9, a2);
LABEL_15:
    if ( !(_WORD)result )
      return result;
  }
  word_180185E04 = result;
  return result;
}
