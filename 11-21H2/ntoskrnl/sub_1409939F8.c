/*
 * XREFs of sub_1409939F8 @ 0x1409939F8
 * Callers:
 *     sub_14082473C @ 0x14082473C (sub_14082473C.c)
 *     sub_14098DCC4 @ 0x14098DCC4 (sub_14098DCC4.c)
 * Callees:
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140992544 @ 0x140992544 (sub_140992544.c)
 *     sub_1409925D4 @ 0x1409925D4 (sub_1409925D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_1409939F8(unsigned int *a1, char a2)
{
  const EVENT_DESCRIPTOR *v4; // rdi
  const EVENT_DESCRIPTOR *v5; // r13
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebp
  void *Pool2; // rdi
  unsigned int i; // r15d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // r9d
  unsigned int v17; // r8d
  __int64 j; // r9
  __int64 v19; // r11
  __int64 v20; // r12
  __int64 v21; // r10

  if ( a2 )
  {
    v4 = &stru_140039378;
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)qword_1400383F0;
    sub_140355058(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL), *(_DWORD *)(*(_QWORD *)a1 + 16LL), 12, a1[36]);
  }
  if ( byte_140C5AE14 && EtwEventEnabled(RegHandle, v4) )
  {
    sub_140992544(v4, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL), *(_DWORD *)(*(_QWORD *)a1 + 16LL), a1[36]);
    v5 = (const EVENT_DESCRIPTOR *)qword_1400394F8;
    if ( !a2 )
      v5 = &stru_140039970;
    if ( EtwEventEnabled(RegHandle, v5) )
    {
      v6 = a1[36];
      v7 = 0;
      if ( v6 )
      {
        v8 = *((_QWORD *)a1 + 19);
        v9 = v6;
        do
        {
          if ( !*(_DWORD *)(*(_QWORD *)v8 + 28LL) && *(_DWORD *)(*(_QWORD *)v8 + 32LL) > v7 )
            v7 = *(_DWORD *)(*(_QWORD *)v8 + 32LL);
          v8 += 32LL;
          --v9;
        }
        while ( v9 );
      }
      v10 = 0;
      if ( v7 )
      {
        if ( 8 * (unsigned __int64)v7 > 0xFFFFFFFF )
          return;
        v10 = 8 * v7;
        Pool2 = (void *)ExAllocatePool2(256LL, 8 * v7, 1297630800LL);
        if ( !Pool2 )
          return;
      }
      else
      {
        Pool2 = 0LL;
      }
      for ( i = 0; i < a1[36]; ++i )
      {
        v13 = *((_QWORD *)a1 + 19);
        v14 = 32LL * i;
        v15 = *(_QWORD *)(v14 + v13);
        v16 = *(_DWORD *)(v15 + 28);
        if ( v16 )
        {
          v19 = *(_QWORD *)(v15 + 32);
          v17 = 0;
          v20 = *(_QWORD *)(v15 + 40);
          v21 = 0LL;
        }
        else
        {
          memset(Pool2, 0, v10);
          v17 = *(_DWORD *)(v15 + 32);
          for ( j = 0LL; (unsigned int)j < v17; v17 = *(_DWORD *)(v15 + 32) )
          {
            *((_QWORD *)Pool2 + j) = *(_QWORD *)(*(_QWORD *)(v15 + 40) + 16LL * (unsigned int)j);
            j = (unsigned int)(j + 1);
          }
          v13 = *((_QWORD *)a1 + 19);
          LOBYTE(v19) = 0;
          v16 = *(_DWORD *)(v15 + 28);
          LOBYTE(v20) = 0;
          v21 = (__int64)Pool2;
        }
        sub_1409925D4(
          v5,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 48LL),
          *(_DWORD *)(*(_QWORD *)a1 + 16LL),
          i,
          v16,
          *(_DWORD *)(v15 + 24),
          v19,
          v20,
          (unsigned __int16 *)v15,
          v17,
          v21,
          *(_QWORD *)(v14 + v13 + 8));
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x4D584650u);
    }
  }
}
