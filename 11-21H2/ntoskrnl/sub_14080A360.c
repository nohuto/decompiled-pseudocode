/*
 * XREFs of sub_14080A360 @ 0x14080A360
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 */

void __fastcall sub_14080A360(int *a1, _DWORD *a2)
{
  char *v4; // r8
  __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // eax

  sub_1402D66A8((ULONG_PTR)&qword_140C1FC30);
  *a1 = 0;
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  if ( dword_140C095F4 )
  {
    v4 = (char *)&unk_140C09610;
    v5 = 4LL;
    v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    do
    {
      if ( !v4[8] )
      {
        v7 = v6 - *(_QWORD *)v4;
        if ( v7 <= (unsigned int)dword_140C095F4 )
        {
          v8 = *a1;
          if ( *a1 <= (unsigned int)(dword_140C095F4 - v7) )
            v8 = dword_140C095F4 - v7;
          *a1 = v8;
        }
      }
      v4 += 56;
      --v5;
    }
    while ( v5 );
    *a2 = dword_140C095F0;
  }
  else
  {
    *a1 = -1;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C1FC30);
}
