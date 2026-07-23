/*
 * XREFs of sub_140398BE0 @ 0x140398BE0
 * Callers:
 *     sub_140398B2C @ 0x140398B2C (sub_140398B2C.c)
 *     sub_1405DBF90 @ 0x1405DBF90 (sub_1405DBF90.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405DBB80 @ 0x1405DBB80 (sub_1405DBB80.c)
 *     sub_1405DBCD4 @ 0x1405DBCD4 (sub_1405DBCD4.c)
 */

__int64 __fastcall sub_140398BE0(unsigned int *a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int64 v17; // r11

  result = *a1;
  if ( (result & 0x10) != 0 )
  {
    v8 = a2 - *((_QWORD *)a1 + 1);
    if ( (result & 2) != 0 )
    {
      *((_QWORD *)a1 + 2) += v8;
    }
    else if ( (result & 1) != 0 )
    {
      *((_QWORD *)a1 + 3) += v8;
    }
    else
    {
      *((_QWORD *)a1 + 4) += v8;
    }
    if ( (result & 8) == 0 )
    {
      LODWORD(result) = result | 4;
      *a1 = result;
    }
    LOBYTE(a4) = (result & 4) != 0;
    v9 = sub_1405DBB80(a1, a1[10], a1 + 12, a4);
    v10 = v9;
    ++*(_DWORD *)(v9 + 408);
    *(_QWORD *)(v9 + 440) += *((_QWORD *)a1 + 24);
    v11 = *((_QWORD *)a1 + 24);
    if ( v11 < *(_QWORD *)(v9 + 424) )
    {
      *(_QWORD *)(v9 + 424) = v11;
      v11 = *((_QWORD *)a1 + 24);
    }
    if ( v11 > *(_QWORD *)(v9 + 432) )
    {
      *(_QWORD *)(v9 + 432) = v11;
      v11 = *((_QWORD *)a1 + 24);
    }
    sub_1405DBCD4(v11, 9, v9 + 448, 0, (__int64)&unk_140C1F4C0);
    if ( *(_DWORD *)(v10 + 408) > 1u )
      sub_1405DBCD4(a2 - *(_DWORD *)(v10 + 528), v12 + 11, v10 + 484, v12, (__int64)&unk_140C1F520);
    *(_QWORD *)(v10 + 528) = a2;
    KeAddProcessorAffinityEx((unsigned __int16 *)(v10 + 144), a1[50]);
    v13 = *((_QWORD *)a1 + 3) + *((_QWORD *)a1 + 4) + *((_QWORD *)a1 + 2);
    *(_QWORD *)(v10 + 536) += v13;
    sub_1405DBCD4(v13, 5, v10 + 544, v10 + 568, (__int64)&unk_140C0BE38);
    *(_QWORD *)(v10 + 608) += *((_QWORD *)a1 + 2);
    sub_1405DBCD4(*((_QWORD *)a1 + 2), v14, v10 + 616, v10 + 640, (__int64)&unk_140C0BE68);
    *(_QWORD *)(v10 + 680) += *((_QWORD *)a1 + 3);
    sub_1405DBCD4(*((_QWORD *)a1 + 3), v15, v10 + 688, v10 + 712, (__int64)&unk_140C0BCF8);
    *(_QWORD *)(v10 + 752) += *((_QWORD *)a1 + 4);
    sub_1405DBCD4(*((_QWORD *)a1 + 4), v16, v10 + 760, v10 + 776, v17);
    result = (__int64)memset(a1, 0, 0xD0uLL);
    if ( a3 )
    {
      result = *(unsigned int *)(v10 + 416);
      *a3 = result;
    }
  }
  return result;
}
