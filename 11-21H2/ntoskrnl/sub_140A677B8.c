/*
 * XREFs of sub_140A677B8 @ 0x140A677B8
 * Callers:
 *     sub_140A66050 @ 0x140A66050 (sub_140A66050.c)
 *     sub_140A66DB4 @ 0x140A66DB4 (sub_140A66DB4.c)
 * Callees:
 *     sub_14029B210 @ 0x14029B210 (sub_14029B210.c)
 *     sub_14029B8E8 @ 0x14029B8E8 (sub_14029B8E8.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14056CB60 @ 0x14056CB60 (sub_14056CB60.c)
 *     sub_14056CC3C @ 0x14056CC3C (sub_14056CC3C.c)
 *     sub_140A6581C @ 0x140A6581C (sub_140A6581C.c)
 */

void __fastcall sub_140A677B8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int16 v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
    sub_1402F32E0(&v14, a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v6;
  v7 = v6 - 2;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 && *(_BYTE *)(a2 + 9) )
              {
                sub_14029B210(*((_QWORD *)KeGetCurrentPrcb() + 216), MEMORY[0xFFFFF780000005F0] | 0x100LL);
                *(_BYTE *)(a2 + 9) = 0;
              }
            }
            else if ( byte_140D018D0 )
            {
              sub_14029B8E8(*((_QWORD *)KeGetCurrentPrcb() + 216), MEMORY[0xFFFFF780000005F0] | 0x100LL);
              *(_BYTE *)(a2 + 9) = 1;
            }
          }
          else if ( *(_BYTE *)(a2 + 8) )
          {
            _enable();
          }
        }
        else
        {
          sub_14056CB60();
        }
      }
      else
      {
        sub_140A6581C((__int64 *)a1, (unsigned int *)a2);
      }
    }
    else
    {
      sub_14056CC3C();
    }
  }
  else
  {
    _disable();
    *(_BYTE *)(a2 + 8) = (v13 & 0x200) != 0;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
