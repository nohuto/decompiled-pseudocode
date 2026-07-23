/*
 * XREFs of EtwpCoverageFlushPending @ 0x1407E8B64
 * Callers:
 *     EtwpCoverageRecord @ 0x1407DD850 (EtwpCoverageRecord.c)
 *     EtwpCoverageFlushWorkItemCallback @ 0x1407E8A90 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpCoverageReset @ 0x1409E86EC (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1409E88D0 (EtwpCoverageResetCP.c)
 *     EtwpFlushCoverage @ 0x1409E8C2C (EtwpFlushCoverage.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

int *__fastcall EtwpCoverageFlushPending(int **a1)
{
  int *result; // rax
  int *v3; // rsi
  unsigned __int64 v4; // rdi
  int *v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  int *v12; // rcx
  __int16 v13; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+3Ch] [rbp-55h] BYREF
  int v15; // [rsp+40h] [rbp-51h] BYREF
  int v16; // [rsp+44h] [rbp-4Dh] BYREF
  int v17; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-39h] BYREF
  int *v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  int v21; // [rsp+84h] [rbp-Dh]
  int *v22; // [rsp+88h] [rbp-9h]
  int v23; // [rsp+90h] [rbp-1h]
  int v24; // [rsp+94h] [rbp+3h]
  int *v25; // [rsp+98h] [rbp+7h]
  int v26; // [rsp+A0h] [rbp+Fh]
  int v27; // [rsp+A4h] [rbp+13h]
  int *v28; // [rsp+A8h] [rbp+17h]
  int v29; // [rsp+B0h] [rbp+1Fh]
  int v30; // [rsp+B4h] [rbp+23h]
  __int16 *v31; // [rsp+B8h] [rbp+27h]
  int v32; // [rsp+C0h] [rbp+2Fh]
  int v33; // [rsp+C4h] [rbp+33h]
  __int64 v34; // [rsp+C8h] [rbp+37h]
  int v35; // [rsp+D0h] [rbp+3Fh]
  int v36; // [rsp+D4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (int *)&retaddr;
  if ( *((_DWORD *)a1 + 16) )
  {
    v3 = a1[5];
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v13 = *((_WORD *)a1 + 32);
    if ( (unsigned int)dword_140C04320 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C04320, 0x400000000000LL) )
      {
        v5 = *a1;
        v6 = **a1;
        v21 = 0;
        v14 = v6;
        v19 = &v14;
        v20 = 4;
        v7 = v5[1];
        v24 = 0;
        v15 = v7;
        v22 = &v15;
        v23 = 4;
        v8 = v4 - v5[4];
        v27 = 0;
        v16 = v8;
        v25 = &v16;
        v26 = 4;
        v9 = v4 - v5[5];
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v17 = v9;
        v28 = &v17;
        v31 = &v13;
        v10 = *((_QWORD *)v3 + 4);
        v29 = 4;
        v11 = *((_WORD *)v3 + 12) - v10;
        v34 = v10;
        v35 = v11;
        v32 = 2;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04320,
          (unsigned __int8 *)&word_140035636,
          0LL,
          0LL,
          8u,
          &v18);
      }
    }
    *((_QWORD *)v3 + 4) = *((_QWORD *)v3 + 3);
    v12 = *a1;
    *((_DWORD *)a1 + 16) = 0;
    KeCancelTimer2((__int64)(v12 + 60));
    result = *a1;
    (*a1)[4] = v4;
  }
  return result;
}
