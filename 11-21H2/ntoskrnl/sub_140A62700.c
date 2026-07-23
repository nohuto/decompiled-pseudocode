/*
 * XREFs of sub_140A62700 @ 0x140A62700
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A622EC @ 0x140A622EC (sub_140A622EC.c)
 *     sub_140A625DC @ 0x140A625DC (sub_140A625DC.c)
 *     sub_140A629D4 @ 0x140A629D4 (sub_140A629D4.c)
 *     sub_140A62BC0 @ 0x140A62BC0 (sub_140A62BC0.c)
 */

__int64 __fastcall sub_140A62700(int a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned int v4; // r14d
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ebp
  unsigned int v11; // edi
  LARGE_INTEGER v12; // rdx
  unsigned int v13; // esi
  int v14; // ebp
  __int64 v15; // rdi
  LARGE_INTEGER v16; // rdx
  unsigned int v17; // edi

  v3 = *(_DWORD *)a2;
  v4 = 0;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          *(_BYTE *)(a2 + 68) = 1;
          if ( v3 )
          {
            v8 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
            v9 = *(_DWORD *)(a2 + 48);
            v10 = v3 + 1;
            while ( v9 < v10 )
            {
              if ( (++v8 & dword_140C4C47C) != 0 || !qword_140C4C480 )
                _mm_pause();
              else
                sub_14042A5E0(v8, a2);
              v9 = *(_DWORD *)(a2 + 48);
            }
            v11 = 0;
            _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
            while ( *(_DWORD *)(a2 + 52) < v10 )
            {
              if ( (++v11 & dword_140C4C47C) != 0 || !qword_140C4C480 )
                _mm_pause();
              else
                sub_14042A5E0(v11, a2);
            }
          }
        }
      }
      else
      {
        sub_140A622EC(a2, a2, a3);
      }
    }
    else if ( v3 )
    {
      *(LARGE_INTEGER *)(a2 + 80) = KeQueryPerformanceCounter((PLARGE_INTEGER)(a2 + 72));
      v13 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 48));
      v14 = v3 + 1;
      while ( *(_DWORD *)(a2 + 48) < v14 )
      {
        if ( (++v13 & dword_140C4C47C) != 0 || !qword_140C4C480 )
          _mm_pause();
        else
          sub_14042A5E0(v13, (LARGE_INTEGER)v12.QuadPart);
      }
      while ( *(_DWORD *)(a2 + 56) < v3 )
        _mm_pause();
      v15 = 0LL;
      for ( *(LARGE_INTEGER *)(a2 + 96) = KeQueryPerformanceCounter(0LL);
            (unsigned int)v15 < *(_DWORD *)a2;
            v15 = (unsigned int)(v15 + 1) )
      {
        sub_140A629D4(*(unsigned int *)(*(_QWORD *)(a2 + 24) + 4 * v15));
      }
      *(LARGE_INTEGER *)(a2 + 112) = KeQueryPerformanceCounter(0LL);
      if ( !*(_BYTE *)(a2 + 44) )
        v4 = sub_140A62BC0(*(_QWORD *)(a2 + 8));
      v17 = 0;
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 52));
      while ( *(_DWORD *)(a2 + 52) < v14 )
      {
        if ( (++v17 & dword_140C4C47C) != 0 || !qword_140C4C480 )
          _mm_pause();
        else
          sub_14042A5E0(v17, (LARGE_INTEGER)v16.QuadPart);
      }
    }
  }
  else
  {
    sub_140A625DC(a2, a2);
  }
  return v4;
}
