/*
 * XREFs of sub_1406C1524 @ 0x1406C1524
 * Callers:
 *     sub_140798C10 @ 0x140798C10 (sub_140798C10.c)
 *     sub_1409E971C @ 0x1409E971C (sub_1409E971C.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x14041B860 (ZwWriteFile.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 *     sub_1409E08A8 @ 0x1409E08A8 (sub_1409E08A8.c)
 *     sub_1409E0A0C @ 0x1409E0A0C (sub_1409E0A0C.c)
 */

__int64 __fastcall sub_1406C1524(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  unsigned __int64 Length; // rbp
  NTSTATUS v6; // edi
  __int64 v7; // rcx
  int v9; // r8d
  unsigned __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(unsigned int *)(a1 + 292);
  Length = *a2;
  IoStatusBlock = 0LL;
  if ( (_DWORD)v2 )
  {
    v9 = *(_DWORD *)(a1 + 12);
    if ( (v9 & 1) != 0 && (v9 & 0x4000000) != 0 )
      v10 = *(_QWORD *)(a1 + 216) + Length;
    else
      v10 = Length * *(unsigned int *)(a1 + 204);
    if ( v10 >= v2 * ((-(__int64)((v9 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
    {
      if ( (v9 & 2) != 0 )
      {
        *(_QWORD *)(a1 + 216) = *(unsigned int *)(a1 + 4);
        *(_DWORD *)(a1 + 204) = 1;
      }
      else
      {
        if ( (v9 & 8) == 0 )
        {
          v6 = -1073741432;
          if ( (*(_DWORD *)(a1 + 816) & 0x100) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x100u);
            if ( EtwEventEnabled(qword_140C15FA8, &stru_140039100) )
              sub_1409E0A0C(a1 + 152, v11, v12, a1 + 136, a1 + 152);
          }
          goto LABEL_20;
        }
        if ( (*(_DWORD *)(a1 + 824) & 1) == 0 )
        {
          sub_1407FC710(a1 + 168, a1 + 296, a1 + 184);
          _InterlockedOr((volatile signed __int32 *)(a1 + 824), 1u);
        }
      }
    }
  }
  v6 = ZwWriteFile(*(HANDLE *)(a1 + 800), 0LL, 0LL, 0LL, &IoStatusBlock, a2, Length, (PLARGE_INTEGER)(a1 + 216), 0LL);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 1096);
    *(_QWORD *)(a1 + 216) += Length;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 4136), Length);
    ++*(_DWORD *)(a1 + 248);
    ++*(_DWORD *)(a1 + 204);
    return (unsigned int)v6;
  }
  if ( EtwEventEnabled(qword_140C15FA8, &stru_140038238) )
    sub_1409E08A8(a1 + 152, (unsigned int)&stru_140038238, v13, a1 + 136, a1 + 152, v6, *(_DWORD *)(a1 + 12));
LABEL_20:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
  if ( v6 == -1073741670 )
    return 0;
  return (unsigned int)v6;
}
