/*
 * XREFs of sub_1407E5148 @ 0x1407E5148
 * Callers:
 *     sub_140706680 @ 0x140706680 (sub_140706680.c)
 *     sub_140706ABC @ 0x140706ABC (sub_140706ABC.c)
 *     sub_140707460 @ 0x140707460 (sub_140707460.c)
 *     sub_1407E4D40 @ 0x1407E4D40 (sub_1407E4D40.c)
 * Callees:
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_14033D760 @ 0x14033D760 (sub_14033D760.c)
 *     sub_140365C94 @ 0x140365C94 (sub_140365C94.c)
 *     sub_1405C629C @ 0x1405C629C (sub_1405C629C.c)
 */

void __fastcall sub_1407E5148(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int16 v6; // di
  unsigned int *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v5 = a2;
  v6 = a1;
  v7 = sub_140286F90(a4, a1, v12);
  if ( v7 )
  {
    v8 = (v12[0] << 12) + ((unsigned __int64)v7[9] << 9);
    if ( (dword_140C4EEF0 || dword_140CF5E58) && (int)sub_14033D760((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = ((unsigned __int64)(v6 & 0xFFF) + v5 + 4095) >> 12;
      v10 = v9 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v10 = v9;
      v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( dword_140CF5E58 )
        sub_1405C629C(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v11, v10, 0);
      if ( dword_140C4EEF0 && v10 )
      {
        do
        {
          sub_140365C94(a3, v11, 2u);
          LODWORD(v11) = v11 + 4096;
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
