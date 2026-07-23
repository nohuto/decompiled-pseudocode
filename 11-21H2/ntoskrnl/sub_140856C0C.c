/*
 * XREFs of sub_140856C0C @ 0x140856C0C
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     sub_1407EC7CC @ 0x1407EC7CC (sub_1407EC7CC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140856C80 @ 0x140856C80 (sub_140856C80.c)
 */

__int64 __fastcall sub_140856C0C(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // eax

  v7 = -1073741275;
  if ( a1 )
  {
    v7 = 0;
    v8 = sub_140856C80();
    v9 = v8;
    if ( v8 )
    {
      *a3 = *(_DWORD *)(v8 + 36);
      v10 = *a4;
      v11 = *(_DWORD *)(v8 + 32);
      *a4 = v11;
      if ( v10 < v11 )
        return (unsigned int)-1073741789;
      else
        memmove(a5, *(const void **)(v9 + 40), *(unsigned int *)(v9 + 32));
    }
    else
    {
      *a4 = 0;
    }
  }
  return v7;
}
