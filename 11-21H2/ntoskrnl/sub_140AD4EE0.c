/*
 * XREFs of sub_140AD4EE0 @ 0x140AD4EE0
 * Callers:
 *     sub_140AD4DC4 @ 0x140AD4DC4 (sub_140AD4DC4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140AD4EE0(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned int v5; // r11d
  unsigned __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 12) - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v4 = *(_QWORD *)(a1 + 32);
      v5 = *(_DWORD *)(a1 + 20);
      if ( v3 )
        v4 = __readmsr(v5) & v3 | ~v3 & v4;
      result = v4;
      __writemsr(v5, v4);
    }
    else
    {
      __debugbreak();
    }
  }
  else
  {
    result = __readmsr(*(_DWORD *)(a1 + 20));
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
