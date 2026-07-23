/*
 * XREFs of sub_14052C290 @ 0x14052C290
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14052C1E4 @ 0x14052C1E4 (sub_14052C1E4.c)
 *     KeProfileInterruptWithSource @ 0x140571540 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x1405C6DA0 (PoGetProcessorIdleAccounting.c)
 */

__int64 (__fastcall **__fastcall sub_14052C290(__int64 a1))()
{
  unsigned __int64 v2; // rsi
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // r14
  unsigned int i; // ebp
  unsigned int v6; // r12d
  unsigned int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // r12d
  LARGE_INTEGER v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+28h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-48h] BYREF
  bool v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v23 = 0;
  LODWORD(v2) = 0x7FFFFFFF;
  result = &off_1400032A0;
  if ( off_140C02520 == &off_1400032A0 )
  {
    v4 = qword_140C4D0A8;
  }
  else
  {
    result = (__int64 (__fastcall **)())qword_140C4D0A8;
    v4 = qword_140C4D0A8 + 8LL * (unsigned int)(dword_140C4D044 * HIDWORD(KeGetPcr()[1].LockArray));
  }
  for ( i = 0; i < dword_140C49FE0; ++i )
  {
    result = *(__int64 (__fastcall ***)())(v4 + 8LL * i);
    if ( !*((_DWORD *)result + 6) )
    {
      v7 = *((_DWORD *)result + 8);
      v25 = *((_DWORD *)&xmmword_140C49EC0 + i);
      v6 = v25;
      v8 = __readmsr(v25);
      result = (__int64 (__fastcall **)())((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) & 0xFFFFFFFFFFFFLL);
      if ( (unsigned __int64)result < 0xFFFF80000001LL )
      {
        v24 = *((_DWORD *)&xmmword_140C49FA0 + i);
        v9 = v24;
        v20 = __readmsr(v24);
        v10 = v20;
        __writemsr(v24, v20 & 0xFFFFFFFFFFAFFFFFuLL);
        if ( v7 )
        {
          KeProfileInterruptWithSource(a1, v7);
          LODWORD(v2) = **(_DWORD **)(v4 + 8LL * i);
        }
        else
        {
          v21 = 0LL;
          PerformanceFrequency.QuadPart = 0LL;
          if ( qword_140D01738 )
            sub_14042A5E0(a1, (v20 & 0xFFFFFFFFFFAFFFFFuLL) >> 32);
          else
            KeProfileInterruptWithSource(a1, 0LL);
          v11 = qword_140C4C728;
          v12 = 32LL * HIDWORD(KeGetPcr()[1].LockArray);
          v13 = *(_DWORD *)(v12 + qword_140C4C728 + 24);
          if ( v13 )
          {
            v14 = *(_DWORD *)(v12 + qword_140C4C728 + 20);
            LODWORD(v2) = *(_DWORD *)(v12 + qword_140C4C728 + 16);
            if ( v14 )
            {
              v16 = v14 - 1;
              *(_DWORD *)(v12 + qword_140C4C728 + 20) = v16;
              if ( !v16 )
              {
                *(_DWORD *)(v12 + v11 + 20) = 0x2710 / v13;
                v17 = 0x2710 / v13;
                if ( !(0x2710 / v13) )
                {
                  *(_DWORD *)(v12 + v11 + 20) = 1;
                  v17 = 1;
                }
                PoGetProcessorIdleAccounting(&v21, 0x2710 % v13);
                if ( v21 == *(_QWORD *)(v12 + v11 + 8) )
                {
                  v18 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v19 = qword_140C4C728;
                  if ( v18.QuadPart != *(_QWORD *)(v12 + qword_140C4C728) )
                  {
                    v2 = PerformanceFrequency.QuadPart
                       * (v17
                        * (unsigned int)v2
                        * (unsigned __int64)*(unsigned int *)(v12 + qword_140C4C728 + 24)
                        / (v18.QuadPart - *(_QWORD *)(v12 + qword_140C4C728)))
                       / 0x989680;
                    if ( v2 >= 0x1000 )
                    {
                      if ( v2 > 0x7FFFFFFF )
                        LODWORD(v2) = 0x7FFFFFFF;
                    }
                    else
                    {
                      LODWORD(v2) = 4096;
                    }
                    *(_DWORD *)(v12 + qword_140C4C728 + 16) = v2;
                    *(LARGE_INTEGER *)(v12 + v19) = v18;
                  }
                }
                else
                {
                  *(_QWORD *)(v12 + v11 + 8) = v21;
                  *(LARGE_INTEGER *)(v12 + qword_140C4C728) = KeQueryPerformanceCounter(0LL);
                }
                v6 = v25;
              }
            }
            else
            {
              v15 = 0x2710 / v13;
              if ( !(0x2710 / v13) )
                v15 = 1;
              *(_DWORD *)(v12 + qword_140C4C728 + 20) = v15;
              PoGetProcessorIdleAccounting(&v21, 0x2710 % v13);
              *(_QWORD *)(v12 + v11 + 8) = v21;
              *(LARGE_INTEGER *)(v12 + qword_140C4C728) = KeQueryPerformanceCounter(0LL);
            }
          }
          v9 = v24;
          v10 = v20;
        }
        if ( i < 6 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8LL * i) + 16LL) + 8LL) )
          __writemsr(*((_DWORD *)&xmmword_140C49EC0 + i + 1), 0xFFFFuLL);
        __writemsr(v6, -(__int64)(unsigned int)v2);
        __writemsr(v9, v10 | 0x500000);
        result = (__int64 (__fastcall **)())sub_14052C1E4(i, v10, &v23);
        if ( v23 )
        {
          result = *(__int64 (__fastcall ***)())(v4 + 8LL * i);
          *((_BYTE *)result + 36) = 1;
        }
      }
    }
  }
  return result;
}
