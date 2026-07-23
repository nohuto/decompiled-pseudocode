/*
 * XREFs of HalWheaUpdateCmciPolicy @ 0x1403DA050
 * Callers:
 *     sub_140A09578 @ 0x140A09578 (sub_140A09578.c)
 *     sub_140B2A640 @ 0x140B2A640 (sub_140B2A640.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LONGLONG __fastcall HalWheaUpdateCmciPolicy(int a1, unsigned int a2)
{
  __int64 v2; // rbx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  LONGLONG result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v2 = a2;
  v3 = a1 - 7;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              dword_140C09784 = a2;
          }
          else
          {
            KeQueryPerformanceCounter(&PerformanceFrequency);
            result = PerformanceFrequency.QuadPart * v2;
            qword_140C54990 = PerformanceFrequency.QuadPart * v2;
          }
        }
        else
        {
          result = 2LL;
          if ( a2 <= 2 )
            LODWORD(v2) = 2;
          dword_140C549A4 = v2;
        }
      }
      else
      {
        dword_140C54A70 = a2;
      }
    }
    else
    {
      dword_140C54A74 = a2;
    }
  }
  else
  {
    byte_140C54A6C = a2;
  }
  return result;
}
