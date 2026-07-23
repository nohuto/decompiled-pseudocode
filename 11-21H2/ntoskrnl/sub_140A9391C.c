/*
 * XREFs of sub_140A9391C @ 0x140A9391C
 * Callers:
 *     sub_140A93644 @ 0x140A93644 (sub_140A93644.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140A81214 @ 0x140A81214 (sub_140A81214.c)
 *     sub_140A81E94 @ 0x140A81E94 (sub_140A81E94.c)
 *     sub_140A93F58 @ 0x140A93F58 (sub_140A93F58.c)
 */

__int64 __fastcall sub_140A9391C(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rsi
  _QWORD *v4; // r14
  _DWORD *v5; // r15
  ULONG v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r10
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  ULONG v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v14);
  if ( v4 && v14 )
  {
    v5 = qword_140C1ACB0;
    v6 = v14 >> 3;
    if ( qword_140C1ACB0 )
    {
      memset(qword_140C1ACB0, 0, 24LL * (unsigned int)dword_140C1ACB8);
      if ( v6 )
      {
        do
        {
          v8 = sub_140A93F58(*v4, &off_140D4E190);
          if ( v8
            || (v8 = sub_140A93F58(v7, &off_140D4E690)) != 0
            || (v8 = sub_140A93F58(v10, &off_140D4F470)) != 0
            || (v8 = sub_140A93F58(v11, &off_140D50040)) != 0 )
          {
            v12 = 3 * v3;
            v3 = (unsigned int)(v3 + 1);
            v5[2 * v12] = v9;
            *(_QWORD *)&v5[2 * v12 + 2] = v8;
          }
          ++v4;
        }
        while ( v9 + 1 < v6 );
        if ( (_DWORD)v3 )
        {
          v2 = sub_140A81214((_QWORD *)a1, (int *)qword_140C1ACB0, v3);
          if ( v2 >= 0 )
            sub_140A81E94((unsigned __int16 *)(a1 + 88), 1);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v2;
}
