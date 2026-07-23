/*
 * XREFs of sub_1405528FC @ 0x1405528FC
 * Callers:
 *     sub_14055225C @ 0x14055225C (sub_14055225C.c)
 *     KeCapturePersistentThreadState @ 0x1405558E0 (KeCapturePersistentThreadState.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 */

__int64 __fastcall sub_1405528FC(char a1, _DWORD *a2, _DWORD *a3)
{
  PVOID *v3; // rbx
  int v4; // edi
  int i; // esi
  int v9; // eax
  __int64 result; // rax

  v3 = (PVOID *)PsLoadedModuleList;
  v4 = 0;
  for ( i = 0; ; i += v9 + 9 )
  {
    if ( v3 == &PsLoadedModuleList )
    {
      *a2 = v4;
      result = 0LL;
      *a3 = i;
      return result;
    }
    if ( a1 && (!sub_1403D7FD4((__int64)v3, 160LL) || !sub_1403D7FD4((__int64)v3[12], *((unsigned __int16 *)v3 + 44))) )
      break;
    v9 = *((unsigned __int16 *)v3 + 44);
    ++v4;
    v3 = (PVOID *)*v3;
  }
  return 3221225473LL;
}
