/*
 * XREFs of sub_1409569F4 @ 0x1409569F4
 * Callers:
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_140808CB4 @ 0x140808CB4 (sub_140808CB4.c)
 * Callees:
 *     sub_1409568C8 @ 0x1409568C8 (sub_1409568C8.c)
 *     sub_140956BBC @ 0x140956BBC (sub_140956BBC.c)
 *     sub_140957044 @ 0x140957044 (sub_140957044.c)
 *     sub_140957DE0 @ 0x140957DE0 (sub_140957DE0.c)
 *     sub_14095A508 @ 0x14095A508 (sub_14095A508.c)
 *     sub_14095A528 @ 0x14095A528 (sub_14095A528.c)
 *     sub_14095EB98 @ 0x14095EB98 (sub_14095EB98.c)
 */

__int64 __fastcall sub_1409569F4(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  unsigned int v6; // edi
  bool v7; // si
  int v8; // r15d
  __int64 v9; // rdx
  __int64 result; // rax

  v3 = *(_QWORD *)(BugCheckParameter2 + 720);
  v4 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(v3 + 20);
  if ( dword_140C44634 != 1 )
  {
    if ( dword_140C44634 == 2 )
    {
      if ( (unsigned __int8)sub_140957DE0() )
      {
        v7 = (unsigned __int8)sub_14095A508(v3, v9) == 0;
        v6 = (unsigned __int8)sub_14095A528() == 0;
      }
    }
    else
    {
      if ( dword_140C44634 != 3 )
        __fastfail(5u);
      v7 = (unsigned __int8)sub_14095A508(*(_QWORD *)(BugCheckParameter2 + 720), (unsigned int)(dword_140C44634 - 2)) == 0;
      LOBYTE(v6) = (unsigned __int8)sub_14095A528() == 0;
    }
  }
  LOBYTE(a3) = v7;
  result = sub_140957044(BugCheckParameter2, v6, a3);
  if ( (int)result >= 0 )
  {
    if ( v7 )
    {
      return (unsigned int)sub_1409568C8(BugCheckParameter2);
    }
    else if ( v8 != v6 && v6 == 1 )
    {
      sub_14095EB98(*(PVOID *)(BugCheckParameter2 + 32));
      sub_140956BBC();
    }
    return v4;
  }
  return result;
}
