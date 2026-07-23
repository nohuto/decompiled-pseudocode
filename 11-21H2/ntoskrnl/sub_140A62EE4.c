/*
 * XREFs of sub_140A62EE4 @ 0x140A62EE4
 * Callers:
 *     sub_140A62BC0 @ 0x140A62BC0 (sub_140A62BC0.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140A62EE4(int a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // edx
  ULONG_PTR v9; // rax
  char v11; // cl
  __int64 ProcessorIndexFromNumber; // r15
  __int64 v13; // r10
  int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // ecx
  _DWORD *v17; // rax
  int v18; // r11d
  unsigned __int64 v19; // rdx
  unsigned __int64 i; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  int v23; // [rsp+58h] [rbp+10h] BYREF

  v23 = a2;
  v4 = a2;
  v6 = 0;
  if ( !(_DWORD)dword_140C54A90 )
  {
LABEL_5:
    sub_14051E038(0LL, 21, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x3F1u);
    return 3221226021LL;
  }
  v9 = qword_140C4E210;
  while ( *(_DWORD *)v9 != a1 )
  {
    ++v6;
    v9 += 64LL;
    if ( v6 >= (unsigned int)dword_140C54A90 )
      goto LABEL_5;
  }
  v11 = *(_BYTE *)(v9 + 13);
  *(_DWORD *)v9 = v4;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)((v9 + 16) & -(__int64)(v11 != 0)));
  v13 = qword_140C54A80 + 24 * ProcessorIndexFromNumber;
  *(_OWORD *)a3 = *(_OWORD *)v13;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v13 + 16);
  if ( *(_DWORD *)v13 == 4 )
  {
    *(_DWORD *)(v13 + 8) = v4;
    v4 = v23;
  }
  if ( *(_QWORD *)(qword_140C54A88 + 144) )
  {
    v14 = sub_14042A5E0(*(_QWORD *)(qword_140C54A88 + 16), &v23);
    if ( v14 < 0 )
    {
      sub_14051E038(qword_140C54A88, 9, v14, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x414u);
      return v15;
    }
    v13 = qword_140C54A80 + 24 * ProcessorIndexFromNumber;
    *(_OWORD *)v13 = *(_OWORD *)a4;
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(a4 + 16);
    v4 = v23;
  }
  v16 = 0;
  if ( dword_140C4E22C )
  {
    v17 = (_DWORD *)qword_140C4E200;
    while ( *v17 != a1 )
    {
      ++v16;
      v17 += 16;
      if ( v16 >= dword_140C4E22C )
        goto LABEL_18;
    }
    *v17 = v4;
  }
LABEL_18:
  v18 = 29;
  if ( *(_DWORD *)a3 == 6 )
  {
    v19 = qword_140D016F0;
    if ( qword_140D016F0 >= (unsigned __int64)qword_140D016F8 )
    {
LABEL_22:
      sub_14051E038(0LL, 29, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x44Bu);
    }
    else
    {
      while ( *(_DWORD *)v19 != *(_DWORD *)(a3 + 8) )
      {
        v19 += 24LL;
        if ( v19 >= qword_140D016F8 )
          goto LABEL_22;
      }
      v21 = *(_QWORD *)(v19 + 8) & ~(1LL << (dword_140D0E5E0[ProcessorIndexFromNumber] & 0x3F));
      *(_QWORD *)(v19 + 8) = v21;
      if ( !v21 )
        *(_DWORD *)v19 = -1;
    }
  }
  *(_OWORD *)a4 = *(_OWORD *)v13;
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v13 + 16);
  if ( *(_DWORD *)a4 == 6 )
  {
    for ( i = qword_140D016F0; ; i += 24LL )
    {
      if ( i >= qword_140D016F8 )
      {
        sub_14051E038(0LL, v18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x46Eu);
        return 0LL;
      }
      if ( *(_DWORD *)i == -1 || *(_DWORD *)i == *(_DWORD *)(a4 + 8) )
        break;
    }
    v22 = dword_140D0E5E0[ProcessorIndexFromNumber];
    *(_DWORD *)i = *(_DWORD *)(a4 + 8);
    *(_QWORD *)(i + 8) |= 1LL << (v22 & 0x3F);
  }
  return 0LL;
}
