/*
 * XREFs of sub_140A64868 @ 0x140A64868
 * Callers:
 *     sub_140A64A00 @ 0x140A64A00 (sub_140A64A00.c)
 * Callees:
 *     RtlInitializeBitMap @ 0x14023C660 (RtlInitializeBitMap.c)
 *     sub_1403BE7F0 @ 0x1403BE7F0 (sub_1403BE7F0.c)
 *     sub_1403CE24C @ 0x1403CE24C (sub_1403CE24C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14051DB18 @ 0x14051DB18 (sub_14051DB18.c)
 *     sub_140522654 @ 0x140522654 (sub_140522654.c)
 *     sub_140522804 @ 0x140522804 (sub_140522804.c)
 */

__int64 __fastcall sub_140A64868(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  __int64 v4; // rax
  void *v5; // rax
  __int64 v6; // rcx
  _RTL_BITMAP *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  PULONG BitMapBuffer; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  v12 = 0LL;
  v1 = 0;
  BitMapBuffer = 0LL;
  v3 = *(_DWORD *)(a1 + 176);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !*((_QWORD *)&xmmword_140C49C40 + 1) )
      {
        HIDWORD(xmmword_140C49C50) = *(_DWORD *)(a1 + 180);
        LODWORD(xmmword_140C49C50) = (16 * HIDWORD(xmmword_140C49C50) + 4095) & 0xFFFFF000;
        v4 = sub_14042A5E0(-1LL, (unsigned int)xmmword_140C49C50 >> 12);
        *(_QWORD *)&xmmword_140C49C40 = v4;
        if ( v4
          && (v5 = (void *)sub_1403BE7F0(v4, (unsigned int)xmmword_140C49C50, 1u),
              (*((_QWORD *)&xmmword_140C49C40 + 1) = v5) != 0LL) )
        {
          memset(v5, 0, (unsigned int)xmmword_140C49C50);
          v1 = sub_1403CE24C(v6, 4 * ((unsigned int)(*(_DWORD *)(a1 + 180) + 31) >> 5), &BitMapBuffer);
          if ( v1 >= 0 )
          {
            RtlInitializeBitMap((PRTL_BITMAP)(&xmmword_140C49C50 + 1), BitMapBuffer, *(_DWORD *)(a1 + 180));
            sub_140522654(v7, 0, *(_DWORD *)(a1 + 180));
            dword_140C49C68 = (unsigned int)sub_14051DB18() >> 9;
            v1 = sub_1403CE24C(v8, 0x1C00u, &v12);
            if ( v1 >= 0 )
            {
              sub_140522804(qword_140C49C20);
              v9 = v12;
              dword_140C49C74 = 128;
              qword_140C49CA0[0] = v12;
              *(_OWORD *)(v12 + 8) = xmmword_140C49C40;
              *(_OWORD *)(v9 + 24) = *(_OWORD *)&xmmword_140C49C50;
              *(_QWORD *)(v9 + 40) = qword_140C49C60;
              *(_DWORD *)(v9 + 48) = 1;
              *(_DWORD *)(v9 + 52) = -1;
            }
          }
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v1;
}
