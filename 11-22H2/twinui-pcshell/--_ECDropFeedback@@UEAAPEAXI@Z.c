/*
 * XREFs of ??_ECDropFeedback@@UEAAPEAXI@Z @ 0x1805E92E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 *     ??1CDropFeedback@@UEAA@XZ @ 0x1805E91D8 (--1CDropFeedback@@UEAA@XZ.c)
 */

CDropFeedback *__fastcall CDropFeedback::`vector deleting destructor'(CDropFeedback *this, char a2)
{
  CDropFeedback::~CDropFeedback(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
