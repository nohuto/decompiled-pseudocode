/*
 * XREFs of sub_14099EE9C @ 0x14099EE9C
 * Callers:
 *     sub_14099F1CC @ 0x14099F1CC (sub_14099F1CC.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     sub_14099EDDC @ 0x14099EDDC (sub_14099EDDC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14099EE9C(unsigned int a1, __int64 a2)
{
  PVOID v2; // rdi
  int v4; // ebx
  unsigned int v5; // r10d
  unsigned __int64 v6; // rdx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF
  CLONG BufferSize; // [rsp+40h] [rbp+18h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  BufferSize = 0;
  v2 = 0LL;
  NewElement = 0;
  Buffer = 0LL;
  if ( a1 >= 0x10 )
  {
    v5 = *(_DWORD *)(a2 + 12);
    v6 = 2LL * v5;
    if ( v6 > 0xFFFFFFFF || (unsigned int)v6 > a1 - 16 )
    {
      v4 = -1073741811;
    }
    else
    {
      v4 = sub_14099EDDC(v5, (_WORD *)(a2 + 16), &Buffer, &BufferSize);
      if ( v4 < 0 )
      {
        v2 = Buffer;
      }
      else
      {
        sub_1402D66A8((ULONG_PTR)&qword_140C1CB30);
        v2 = Buffer;
        if ( RtlInsertElementGenericTableAvl(&stru_140C1CAC0, Buffer, BufferSize, &NewElement) )
        {
          if ( NewElement )
          {
            _InterlockedIncrement(&dword_140C1CB40);
            v2 = Buffer;
            v4 = 0;
          }
          else
          {
            v4 = -1073740008;
          }
        }
        else
        {
          v4 = -1073741670;
        }
        sub_1402935D0((ULONG_PTR)&qword_140C1CB30);
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4D554444u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
