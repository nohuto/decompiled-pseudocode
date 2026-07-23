/*
 * XREFs of sub_140562F78 @ 0x140562F78
 * Callers:
 *     sub_140950E30 @ 0x140950E30 (sub_140950E30.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14074C6C0 @ 0x14074C6C0 (sub_14074C6C0.c)
 */

__int64 __fastcall sub_140562F78(__int64 a1, PDEVICE_OBJECT *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rdx
  _OWORD v7[3]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+80h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  v9 = 0;
  v8 = 0LL;
  memset(v7, 0, sizeof(v7));
  if ( (v2 & 4) != 0 )
  {
    v4 = 8;
  }
  else
  {
    v4 = 0;
    if ( (v2 & 8) != 0 )
      v4 = 16;
  }
  result = v4 | 0x20;
  if ( (v2 & 0x10) == 0 )
    result = v4;
  if ( !(_DWORD)result )
  {
    if ( (int)sub_14074C6C0(*a2, 0LL, v7) >= 0 )
    {
      if ( (int)sub_14042A5E0(*((_QWORD *)&v7[0] + 1), &v9) >= 0 )
      {
        if ( (v9 & 1) != 0 )
        {
          v3 = 8;
        }
        else if ( (v9 & 2) != 0 )
        {
          v3 = 16;
        }
        if ( (v9 & 4) != 0 )
          v3 |= 0x20u;
      }
      sub_14042A5E0(*((_QWORD *)&v7[0] + 1), v6);
      return v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
