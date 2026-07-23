/*
 * XREFs of sub_1403D94C0 @ 0x1403D94C0
 * Callers:
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403A4A60 @ 0x1403A4A60 (sub_1403A4A60.c)
 *     sub_1403A4A9C @ 0x1403A4A9C (sub_1403A4A9C.c)
 */

__int64 __fastcall sub_1403D94C0(unsigned __int64 a1, unsigned int a2)
{
  unsigned int v3; // r9d
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  LARGE_INTEGER v7; // rax
  LARGE_INTEGER v8; // rbx
  LARGE_INTEGER v9; // rdi
  unsigned __int64 v10; // rax
  __int64 result; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v12 = 0;
  v3 = 156250;
  v4 = a2;
  if ( a2 <= 0x1388 )
    v4 = 5000;
  v5 = dword_140D050C8;
  dword_140D06960 = v4;
  if ( a1 < 0x2625A )
    v3 = a1;
  DesiredTime = v3;
  if ( a2 > dword_140D050C8 )
  {
    v5 = a2;
    dword_140D050C8 = a2;
  }
  v6 = qword_140D05110;
  if ( a1 < qword_140D05110 )
  {
    v6 = a1;
    qword_140D05110 = a1;
  }
  if ( v6 < v5 )
    qword_140D05110 = v5;
  dword_140C4F028 = v3;
  v13 = 0;
  qword_140D06FF0 = sub_1403A4A9C(1u, v3, &v13);
  KeNumberProcessors[1] = -v13;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = PerformanceFrequency;
  qword_140D06DB8 = PerformanceFrequency.QuadPart;
  v9 = v7;
  v10 = sub_1403A4A60(PerformanceFrequency.LowPart, &v12);
  MEMORY[0xFFFFF78000000300] = v8.QuadPart;
  MEMORY[0xFFFFF78000000360] = v10;
  MEMORY[0xFFFFF78000000369] = v12;
  MEMORY[0xFFFFF78000000358] = v10;
  MEMORY[0xFFFFF78000000368] = v12;
  MEMORY[0xFFFFF78000000348] = v9.QuadPart;
  MEMORY[0xFFFFF78000000350] = v9.QuadPart;
  result = 0x989680 / DesiredTime;
  dword_140D05278 = 0x989680 / DesiredTime;
  dword_140C2BD00 = 0x989680 / DesiredTime;
  return result;
}
