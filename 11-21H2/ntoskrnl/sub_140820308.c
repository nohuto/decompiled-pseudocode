/*
 * XREFs of sub_140820308 @ 0x140820308
 * Callers:
 *     sub_14081F6E0 @ 0x14081F6E0 (sub_14081F6E0.c)
 *     sub_140820280 @ 0x140820280 (sub_140820280.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14082045C @ 0x14082045C (sub_14082045C.c)
 *     sub_14082071C @ 0x14082071C (sub_14082071C.c)
 *     sub_140820DCC @ 0x140820DCC (sub_140820DCC.c)
 *     sub_140821AAC @ 0x140821AAC (sub_140821AAC.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140820308(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  void *v9; // rsi
  int v10; // edi
  void *v11; // rcx
  void *v13; // rcx
  void *v14; // rcx
  _QWORD v15[8]; // [rsp+20h] [rbp-40h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( a2 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = sub_140821D18(v6, a3, 1LL);
  v9 = (void *)v8;
  if ( v8 )
  {
    HIDWORD(v15[1]) = a1;
    v15[3] = v8;
    v15[0] = a2;
    v10 = sub_140820DCC(v15, &v15[4]);
    if ( v10 >= 0 )
    {
      if ( !v15[4] )
      {
LABEL_16:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_17;
      }
      v10 = sub_140821AAC();
      if ( v10 >= 0 )
      {
        sub_14076FB70(v7, 128);
        sub_14082071C(v15, 0LL);
        v10 = v15[7];
        if ( SLODWORD(v15[7]) >= 0 )
        {
          if ( *(_QWORD *)(v7 + 544) )
          {
            if ( v15[5] )
            {
              ExFreePoolWithTag((PVOID)v15[5], 0);
              v15[5] = 0LL;
            }
          }
          else
          {
            *(_QWORD *)(v7 + 544) = v15[5];
          }
          v11 = *(void **)(v7 + 552);
          if ( v11 )
          {
            ExFreePoolWithTag(v11, 0);
            *(_QWORD *)(v7 + 552) = 0LL;
          }
          v10 = 0;
          *(_QWORD *)(v7 + 552) = v15[6];
        }
      }
    }
  }
  else
  {
    v10 = -1073741823;
  }
  if ( v15[4] )
    sub_14082045C((PVOID)v15[4]);
  if ( v9 )
    goto LABEL_16;
LABEL_17:
  if ( v10 < 0 )
  {
    v13 = *(void **)(v7 + 544);
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v7 + 544) = 0LL;
    }
    v14 = *(void **)(v7 + 552);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *(_QWORD *)(v7 + 552) = 0LL;
    }
  }
  return (unsigned int)v10;
}
