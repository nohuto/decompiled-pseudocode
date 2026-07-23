/*
 * XREFs of sub_1406ED114 @ 0x1406ED114
 * Callers:
 *     sub_1406EF9E0 @ 0x1406EF9E0 (sub_1406EF9E0.c)
 *     sub_140798DA8 @ 0x140798DA8 (sub_140798DA8.c)
 *     sub_14085E858 @ 0x14085E858 (sub_14085E858.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     sub_1409E08A8 @ 0x1409E08A8 (sub_1409E08A8.c)
 *     sub_1409E0968 @ 0x1409E0968 (sub_1409E0968.c)
 */

__int64 __fastcall sub_1406ED114(__int64 a1, __int64 Buffer)
{
  LARGE_INTEGER v2; // r8
  LARGE_INTEGER v3; // rbx
  __int64 v5; // rax
  NTSTATUS v7; // ebp
  LONGLONG v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  bool v12; // sf
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(LARGE_INTEGER *)(a1 + 384);
  v3 = *(LARGE_INTEGER *)(a1 + 400);
  IoStatusBlock = 0LL;
  v5 = *(_QWORD *)(a1 + 392);
  ByteOffset = v2;
  if ( v2.QuadPart >= v5
    && (v2.QuadPart + *(unsigned int *)(Buffer + 48) <= *(_QWORD *)(a1 + 416)
     || (v3 = v2, ByteOffset.QuadPart = 72LL, v2.QuadPart = 72LL, v5 <= 72))
    || v2.QuadPart + *(unsigned int *)(Buffer + 48) < v5 )
  {
    v7 = ZwWriteFile(
           *(HANDLE *)(a1 + 360),
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           (PVOID)Buffer,
           *(_DWORD *)(Buffer + 48),
           &ByteOffset,
           0LL);
    if ( v7 < 0 )
    {
      ++*(_DWORD *)(a1 + 260);
      *(_DWORD *)(a1 + 448) = 2;
      if ( EtwEventEnabled(qword_140C15FA8, &stru_140038238) )
        sub_1409E08A8(a1 + 368, (unsigned int)&stru_140038238, v19, a1 + 136, a1 + 368, v7, *(_DWORD *)(a1 + 12));
    }
    else
    {
      v8 = ByteOffset.QuadPart + *(unsigned int *)(Buffer + 48);
      v9 = *(_QWORD *)(a1 + 416);
      *(_QWORD *)(a1 + 384) = v8;
      if ( v3.QuadPart <= v8 )
        v3.QuadPart = v8;
      *(LARGE_INTEGER *)(a1 + 400) = v3;
      *(_QWORD *)(a1 + 408) += *(unsigned int *)(Buffer + 48);
      v10 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 236));
      ++*(_DWORD *)(a1 + 424);
      if ( v9 - *(_QWORD *)(a1 + 408) <= v10 && *(int *)(a1 + 16) >= 0 )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
        if ( EtwEventEnabled(qword_140C15FA8, &stru_140039130) )
          sub_1409E0968(v17, v16, v18, a1 + 136);
      }
      if ( !v7 )
      {
        if ( *(_WORD *)(Buffer + 54) == 6 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x10000000u);
        else
          _InterlockedAnd((volatile signed __int32 *)(a1 + 816), 0xEFFFFFFF);
      }
    }
    return (unsigned int)v7;
  }
  else
  {
    ++*(_DWORD *)(a1 + 260);
    v12 = *(int *)(a1 + 16) < 0;
    *(_DWORD *)(a1 + 448) = 2;
    if ( !v12 )
      _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
    if ( EtwEventEnabled(qword_140C15FA8, &stru_140039130) )
      sub_1409E0968(v14, v13, v15, a1 + 136);
    return 3221225864LL;
  }
}
