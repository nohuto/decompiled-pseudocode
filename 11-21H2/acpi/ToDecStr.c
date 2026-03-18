/*
 * XREFs of ToDecStr @ 0x1C006AF60
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     ValidateTarget @ 0x1C0018344 (ValidateTarget.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ToDecStr(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // edi
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // eax
  _SLIST_ENTRY *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r11d
  unsigned int i; // r9d
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // r15
  __int64 v22; // r12
  _SLIST_ENTRY *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rbp
  _SLIST_ENTRY *v27; // rax
  __int64 v28; // r9
  unsigned __int64 v29; // r8
  char v30; // al
  __int64 v32; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 80);
  v32 = 0LL;
  v5 = ValidateArgTypes((__int64)a1, v3, 0, "D");
  if ( !v5 )
  {
    v5 = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v32);
    if ( !v5 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v6 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v6 + 2) )
      {
        case 1:
          v24 = *(_QWORD *)(v6 + 16);
          LODWORD(v25) = 0;
          do
          {
            v26 = (int)v25;
            v25 = (unsigned int)(v25 + 1);
            v24 /= 0xAuLL;
          }
          while ( v24 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v25 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v25, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v27 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v27;
          if ( v27 )
          {
            v28 = v26;
            v29 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            if ( (int)v26 >= 0 )
            {
              do
              {
                v30 = HTOALookupTable[v29 % 0xA];
                v29 /= 0xAuLL;
                *(_BYTE *)(v28 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v30;
                --v28;
              }
              while ( v28 >= 0 );
            }
            *(_BYTE *)(v25 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v32, *(_QWORD *)(a2 + 88));
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v6 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v23 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v23;
          if ( v23 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v32, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v8 = *(_DWORD *)(v6 + 24);
          if ( v8 )
          {
            v9 = *(_BYTE **)(v6 + 32);
            v10 = v8;
            v11 = v8 - 1;
            do
            {
              if ( *v9 >= 0xAu )
                v12 = 3 - (*v9 < 0x64u);
              else
                v12 = 1;
              v11 += v12;
              ++v9;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            v11 = 0;
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v11 + 1;
          ConPrintf("length=%x,size=%x\n", v11, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v13 = HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v13;
          if ( v13 )
          {
            v14 = *(_QWORD *)(a2 + 80);
            v15 = 0;
            for ( i = 0; v15 < *(_DWORD *)(v14 + 24); v14 = *(_QWORD *)(a2 + 80) )
            {
              v17 = *(_QWORD *)(a2 + 88);
              v18 = i;
              v19 = i + 1;
              v20 = *(unsigned __int8 *)(v15 + *(_QWORD *)(v14 + 32));
              if ( (unsigned __int8)v20 >= 0xAu )
              {
                v21 = *(_QWORD *)(v17 + 32);
                v22 = (int)((unsigned int)v20 / 0xA) % 10;
                if ( (unsigned __int8)v20 >= 0x64u )
                {
                  *(_BYTE *)(v18 + v21) = HTOALookupTable[(int)((unsigned int)v20 / 0x64) % 10];
                  *(_BYTE *)(v19 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v22];
                  v19 = (unsigned int)(v19 + 1);
                }
                else
                {
                  *(_BYTE *)(v18 + v21) = HTOALookupTable[v22];
                }
                *(_BYTE *)(v19 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(unsigned int)v20 % 0xA];
                v19 = (unsigned int)(v19 + 1);
              }
              else
              {
                *(_BYTE *)(v18 + *(_QWORD *)(v17 + 32)) = HTOALookupTable[v20];
              }
              ++v15;
              *(_BYTE *)(v19 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
              i = v19 + 1;
            }
            *(_BYTE *)(v11 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v32, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v5 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError((__int64)a1, -1072431098);
          v7 = 186;
LABEL_31:
          PrintDebugMessage(v7, 0LL, 0LL, 0LL, 0LL);
          return v5;
      }
      v5 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError((__int64)a1, -1073741670);
      v7 = 185;
      goto LABEL_31;
    }
  }
  return v5;
}
