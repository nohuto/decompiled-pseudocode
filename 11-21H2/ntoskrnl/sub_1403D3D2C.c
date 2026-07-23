/*
 * XREFs of sub_1403D3D2C @ 0x1403D3D2C
 * Callers:
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 * Callees:
 *     sub_14024B0B4 @ 0x14024B0B4 (sub_14024B0B4.c)
 */

__int64 __fastcall sub_1403D3D2C(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16096), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_14024B0B4((_DWORD *)(a1 + 16104), 1);
  return result;
}
