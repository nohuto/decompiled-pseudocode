/*
 * XREFs of PrintObject @ 0x1C0067C8C
 * Callers:
 *     ParseArgObj @ 0x1C00083D4 (ParseArgObj.c)
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     AccFieldUnit @ 0x1C0016690 (AccFieldUnit.c)
 *     ParseLocalObj @ 0x1C002CB68 (ParseLocalObj.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     NestAsyncEvalObject @ 0x1C006982C (NestAsyncEvalObject.c)
 * Callees:
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     PrintBuffData @ 0x1C0067BCC (PrintBuffData.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 */

ULONG __fastcall PrintObject(__int64 a1)
{
  int v2; // ecx
  const char *ObjectTypeName; // rax
  int v5; // edi

  v2 = *(unsigned __int16 *)(a1 + 2);
  switch ( v2 )
  {
    case 1:
      return ConPrintf("0x%I64x", *(_QWORD *)(a1 + 16));
    case 2:
      return ConPrintf("\"%s\"", *(_QWORD *)(a1 + 32));
    case 3:
      ConPrintf("Buffer(0x%x)", *(_DWORD *)(a1 + 24));
      return PrintBuffData(*(unsigned __int8 **)(a1 + 32), *(_DWORD *)(a1 + 24));
    case 4:
      ConPrintf("Package(%d){", **(_DWORD **)(a1 + 32));
      v5 = 0;
      while ( v5 < **(_DWORD **)(a1 + 32) )
      {
        ConPrintf("\n\t");
        PrintObject(*(_QWORD *)(a1 + 32) + 8 * (5LL * v5++ + 1));
        if ( v5 >= **(_DWORD **)(a1 + 32) )
          break;
        ConPrintf(",");
      }
      return ConPrintf("}");
    default:
      ObjectTypeName = (const char *)GetObjectTypeName(v2);
      return ConPrintf(
               "<Obj=%p,Type=%s,Value=0x%I64x,Buff=%p,Len=%d>",
               (const void *)a1,
               ObjectTypeName,
               *(_QWORD *)(a1 + 16),
               *(const void **)(a1 + 32),
               *(_DWORD *)(a1 + 24));
  }
}
