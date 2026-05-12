/*
 * XREFs of sub_1C003A494 @ 0x1C003A494
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003DFEC @ 0x1C003DFEC (sub_1C003DFEC.c)
 *     sub_1C00AC53C @ 0x1C00AC53C (sub_1C00AC53C.c)
 *     sub_1C00AD678 @ 0x1C00AD678 (sub_1C00AD678.c)
 *     sub_1C00AD828 @ 0x1C00AD828 (sub_1C00AD828.c)
 *     sub_1C00ADA98 @ 0x1C00ADA98 (sub_1C00ADA98.c)
 *     sub_1C00ADC5C @ 0x1C00ADC5C (sub_1C00ADC5C.c)
 *     sub_1C00AE090 @ 0x1C00AE090 (sub_1C00AE090.c)
 *     sub_1C00AE43C @ 0x1C00AE43C (sub_1C00AE43C.c)
 *     sub_1C00AE738 @ 0x1C00AE738 (sub_1C00AE738.c)
 *     sub_1C00AE918 @ 0x1C00AE918 (sub_1C00AE918.c)
 *     sub_1C00AEC48 @ 0x1C00AEC48 (sub_1C00AEC48.c)
 */

__int64 __fastcall sub_1C003A494(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  signed int *p_Type; // rdx
  unsigned int v8; // r8d
  unsigned int Options; // ecx
  signed int v10; // ecx
  int v11; // eax
  signed int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  ULONG_PTR Length; // [rsp+38h] [rbp+18h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  p_Type = (signed int *)&a2->AssociatedIrp.MasterIrp->Type;
  v8 = -1073741811;
  Options = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( !p_Type )
    goto LABEL_33;
  if ( Options < 8 )
    goto LABEL_33;
  v10 = *p_Type;
  if ( (unsigned int)*p_Type > 0x12 )
    goto LABEL_33;
  v11 = 507666;
  if ( !_bittest(&v11, v10) )
    goto LABEL_33;
  v12 = p_Type[1];
  if ( !v12 )
  {
    if ( v10 > 12 )
    {
      v19 = v10 - 13;
      if ( v19 )
      {
        v20 = v19 - 2;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              if ( v22 != 1 )
                goto LABEL_34;
              v18 = sub_1C00AE090(a1, a2, &Length, a3);
            }
            else
            {
              v18 = sub_1C00AE918(a1, a2, &Length, a3);
            }
          }
          else
          {
            v18 = sub_1C00AE738(a1, a2, &Length, a3);
          }
        }
        else
        {
          v18 = sub_1C00AD828(a1, a2, &Length, a3);
        }
      }
      else
      {
        v18 = sub_1C00AE43C(a1, a2, &Length, a3);
      }
    }
    else if ( v10 == 12 )
    {
      v18 = sub_1C00ADA98(a1, a2, &Length, a3);
    }
    else
    {
      v13 = v10 - 1;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( !v14 )
          goto LABEL_33;
        v15 = v14 - 4;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
              {
                v8 = sub_1C00AEC48(a1, a2, &Length, a3);
                a2->IoStatus.Information = Length;
                return sub_1C0003440(a2, 0, v8);
              }
LABEL_34:
              a2->IoStatus.Information = 0LL;
              return sub_1C0003440(a2, 0, v8);
            }
            v18 = sub_1C00AD678(a1, a2, &Length, a3);
          }
          else
          {
            v18 = sub_1C00ADC5C(a1, a2, &Length, a3);
          }
        }
        else
        {
          v18 = sub_1C003DFEC(a1, a2, &Length, a3);
        }
      }
      else
      {
        v18 = sub_1C00AC53C(a1, a2, &Length, a3);
      }
    }
    v8 = v18;
    a2->IoStatus.Information = Length;
    return sub_1C0003440(a2, 0, v8);
  }
  if ( v12 != 1 )
  {
LABEL_33:
    v8 = -1073741808;
    goto LABEL_34;
  }
  v8 = 0;
  return sub_1C0003440(a2, 0, v8);
}
