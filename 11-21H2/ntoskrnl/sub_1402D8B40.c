/*
 * XREFs of sub_1402D8B40 @ 0x1402D8B40
 * Callers:
 *     sub_1402D8ABC @ 0x1402D8ABC (sub_1402D8ABC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_1402D8B40(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 *v10; // rcx
  __int64 v11; // rcx

  result = (unsigned int)dword_140E00020[0];
  if ( dword_140E00020[0] == dword_140E00024 )
  {
    byte_140E0002C = 1;
  }
  else
  {
    _InterlockedIncrement(&dword_140E00028);
    v9 = 1;
    if ( dword_140E00020[0] != 1 )
    {
      if ( dword_140E00020[0] > 1u )
      {
        v10 = (unsigned __int64 *)&unk_140E00050;
        while ( a2 >= *v10 )
        {
          ++v9;
          v10 += 3;
          if ( v9 >= dword_140E00020[0] )
          {
            if ( v9 == dword_140E00020[0] )
              goto LABEL_9;
            break;
          }
        }
      }
      memmove(
        &dword_140E00020[4 * v9 + 10 + 2 * v9],
        &dword_140E00020[4 * v9 + 4 + 2 * v9],
        24LL * (dword_140E00020[0] - v9));
    }
LABEL_9:
    v11 = 3LL * v9;
    result = a5;
    *(_QWORD *)&dword_140E00020[2 * v11 + 4] = a3;
    *(_QWORD *)&dword_140E00020[2 * v11 + 6] = a2;
    dword_140E00020[2 * v11 + 8] = a4;
    dword_140E00020[2 * v11 + 9] = a5;
    ++dword_140E00020[0];
    _InterlockedIncrement(&dword_140E00028);
  }
  return result;
}
