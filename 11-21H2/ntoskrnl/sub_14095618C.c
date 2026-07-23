/*
 * XREFs of sub_14095618C @ 0x14095618C
 * Callers:
 *     sub_14077BCA0 @ 0x14077BCA0 (sub_14077BCA0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14065F700 @ 0x14065F700 (sub_14065F700.c)
 *     sub_14065FC74 @ 0x14065FC74 (sub_14065FC74.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_14078A584 @ 0x14078A584 (sub_14078A584.c)
 *     sub_14078A600 @ 0x14078A600 (sub_14078A600.c)
 *     sub_140954024 @ 0x140954024 (sub_140954024.c)
 */

__int64 __fastcall sub_14095618C(_OWORD *a1, unsigned int a2, _QWORD *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ebx
  _OWORD v15[26]; // [rsp+30h] [rbp-1E8h] BYREF

  memset(v15, 0, sizeof(v15));
  *a6 = 0;
  result = sub_140954024(a1, a2, v10, v15);
  if ( (int)result >= 0 )
  {
    if ( sub_14078A600(4u) && sub_14065FC74(0xAu) )
    {
      if ( WORD4(v15[0]) && a3 && a4 >= 8 && (v14 = DWORD1(v15[0]), (unsigned int)(DWORD1(v15[0]) - 1) <= 1) )
      {
        v13 = sub_14077FAC0(v12, (_WORD *)v15 + 4);
        if ( v13 >= 0 )
          v13 = sub_14065F700((PCWSTR)v15 + 4, SDWORD2(v15[25]), v14);
      }
      else
      {
        v13 = -1073741811;
      }
    }
    else
    {
      v13 = -1073741790;
    }
    return sub_14078A584(v13, SHIDWORD(v15[25]), a3, a4, a6);
  }
  return result;
}
