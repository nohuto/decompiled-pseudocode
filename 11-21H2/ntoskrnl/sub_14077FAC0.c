/*
 * XREFs of sub_14077FAC0 @ 0x14077FAC0
 * Callers:
 *     sub_14065F3BC @ 0x14065F3BC (sub_14065F3BC.c)
 *     sub_14065F7D4 @ 0x14065F7D4 (sub_14065F7D4.c)
 *     sub_14077F934 @ 0x14077F934 (sub_14077F934.c)
 *     sub_1407855F0 @ 0x1407855F0 (sub_1407855F0.c)
 *     sub_140789718 @ 0x140789718 (sub_140789718.c)
 *     sub_14078A748 @ 0x14078A748 (sub_14078A748.c)
 *     sub_14083E410 @ 0x14083E410 (sub_14083E410.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_140954E2C @ 0x140954E2C (sub_140954E2C.c)
 *     sub_140955848 @ 0x140955848 (sub_140955848.c)
 *     sub_140955BAC @ 0x140955BAC (sub_140955BAC.c)
 *     sub_140955EF8 @ 0x140955EF8 (sub_140955EF8.c)
 *     sub_14095618C @ 0x14095618C (sub_14095618C.c)
 * Callees:
 *     sub_1402DF9D0 @ 0x1402DF9D0 (sub_1402DF9D0.c)
 */

__int64 __fastcall sub_14077FAC0(__int64 a1, _WORD *a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // r8d
  __int16 *v5; // r11
  __int16 v6; // ax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = sub_1402DF9D0(a2, 200LL, &v8);
  if ( v4 >= 0 )
  {
    v6 = *v5;
    if ( *v5 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
        {
          if ( !v2 )
            return 3221225523LL;
          v2 = 0;
          ++v3;
        }
        else
        {
          ++v2;
        }
        v6 = v5[1];
        ++v5;
        if ( !v6 )
        {
          if ( v2 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
