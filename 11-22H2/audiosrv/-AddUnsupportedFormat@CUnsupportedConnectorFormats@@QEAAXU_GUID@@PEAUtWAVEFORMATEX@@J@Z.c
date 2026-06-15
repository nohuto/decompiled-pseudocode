/*
 * XREFs of ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x18014AF98
 * Callers:
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall CUnsupportedConnectorFormats::AddUnsupportedFormat(
        CUnsupportedConnectorFormats *this,
        struct _GUID *a2,
        struct tWAVEFORMATEX *a3,
        int a4)
{
  DWORD nSamplesPerSec; // r11d
  __int64 v7; // r9
  __int16 v8; // r10
  WORD wFormatTag; // ax
  __int64 v10; // rdx
  __int16 v11; // r11
  int v12; // r9d
  int v13; // r9d
  __int64 v14; // rdx
  __int16 v15; // r8
  __int64 v16; // r9
  __int16 v17; // dx
  __int16 v18; // r10
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rdx
  struct _GUID v22; // xmm0
  __int64 v23; // rdx

  nSamplesPerSec = a3->nSamplesPerSec;
  v7 = *((__int16 *)this + 114);
  v8 = 0;
  if ( (__int16)v7 <= 0 )
  {
LABEL_4:
    if ( (int)v7 >= 15 )
    {
      v8 = *((_WORD *)this + 114);
    }
    else
    {
      *((_DWORD *)this + v7 + 1) = nSamplesPerSec;
      v8 = *((_WORD *)this + 114);
      *((_WORD *)this + 114) = v8 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v8 + 1) != nSamplesPerSec )
    {
      if ( ++v8 >= (__int16)v7 )
        goto LABEL_4;
    }
  }
  if ( a3->wFormatTag == 0xFFFE )
    wFormatTag = a3[1].wFormatTag;
  else
    wFormatTag = a3->wBitsPerSample;
  v10 = *((__int16 *)this + 115);
  v11 = 0;
  v12 = a3->wBitsPerSample | (wFormatTag << 8);
  if ( (__int16)v10 <= 0 )
  {
LABEL_13:
    if ( (int)v10 >= 7 )
    {
      v11 = *((_WORD *)this + 115);
    }
    else
    {
      *((_DWORD *)this + v10 + 17) = v12;
      v11 = *((_WORD *)this + 115);
      *((_WORD *)this + 115) = v11 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v11 + 17) != v12 )
    {
      if ( ++v11 >= (__int16)v10 )
        goto LABEL_13;
    }
  }
  if ( a3->wFormatTag == 0xFFFE )
    v13 = *(_DWORD *)&a3[1].nChannels;
  else
    v13 = 0;
  v14 = *((__int16 *)this + 116);
  v15 = 0;
  if ( (__int16)v14 <= 0 )
  {
LABEL_22:
    if ( (int)v14 >= 15 )
    {
      v15 = *((_WORD *)this + 116);
    }
    else
    {
      *((_DWORD *)this + v14 + 25) = v13;
      v15 = *((_WORD *)this + 116);
      *((_WORD *)this + 116) = v15 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v15 + 25) != v13 )
    {
      if ( ++v15 >= (__int16)v14 )
        goto LABEL_22;
    }
  }
  v16 = *((__int16 *)this + 117);
  v17 = 0;
  if ( (__int16)v16 <= 0 )
  {
LABEL_28:
    if ( (int)v16 >= 15 )
    {
      v17 = *((_WORD *)this + 117);
    }
    else
    {
      *((_DWORD *)this + v16 + 41) = a4;
      v17 = *((_WORD *)this + 117);
      *((_WORD *)this + 117) = v17 + 1;
    }
  }
  else
  {
    while ( *((_DWORD *)this + v17 + 41) != a4 )
    {
      if ( ++v17 >= (__int16)v16 )
        goto LABEL_28;
    }
  }
  v18 = v17 | (16 * (v15 | (16 * (v11 | (8 * v8)))));
  v19 = *(_QWORD *)&a2->Data1 - *((_QWORD *)this + 542);
  if ( *(_QWORD *)&a2->Data1 == *((_QWORD *)this + 542) )
    v19 = *(_QWORD *)a2->Data4 - *((_QWORD *)this + 543);
  if ( v19 )
  {
    v20 = *((_DWORD *)this + 1083);
    if ( v20 + 1 < 0x1000 )
      *(_WORD *)((char *)this + v20 + 236) = -1;
    v21 = (unsigned int)(*((_DWORD *)this + 1083) + 2);
    *((_DWORD *)this + 1083) = v21;
    if ( (unsigned __int64)(v21 + 16) < 0x1000 )
      *(struct _GUID *)((char *)this + v21 + 236) = *a2;
    v22 = *a2;
    *((_DWORD *)this + 1083) += 16;
    *((struct _GUID *)this + 271) = v22;
  }
  v23 = *((unsigned int *)this + 1083);
  if ( (unsigned __int64)(v23 + 2) < 0x1000 )
  {
    *(_WORD *)((char *)this + v23 + 236) = v18;
    *((_DWORD *)this + 1083) += 2;
  }
}
